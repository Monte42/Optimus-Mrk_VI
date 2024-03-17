#!/usr/bin/env python3
import rclpy
import threading
from rclpy.node import Node
from functools import partial
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.action.server import ServerGoalHandle
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from cv_bridge import CvBridge
import cv2

from optimus_interfaces.msg import UltraSonicRange
from optimus_interfaces.msg import MotorDriver
from optimus_interfaces.srv import AutonomousDriver
from optimus_interfaces.action import ControlOptimus
from sensor_msgs.msg import Image

class OptimusPiNode(Node):
    def __init__(self):
        super().__init__("optimus_pi")
        self.is_autonomous_ = False
        self.cv_bridge_obj_ = CvBridge()
        # For handling goals froms actions
        self.goal_handle_: ServerGoalHandle = None
        # Add goal lock to reject new goal, preempt an old goal, queue goals
        self.goal_lock = threading.Lock() # we ref goal_handle_ in multi threads, this allows multi threads to access the var   
        self.range_subscriber_ = None
        self.camera_subscriber_ = None
        self.optimus_controller_server_ = ActionServer(
                                                self,
                                                ControlOptimus,
                                                "main_controller",
                                                goal_callback=self.goal_cb,
                                                handle_accepted_callback=self.handle_accept_cb,
                                                cancel_callback=self.cancle_goal_cb,
                                                execute_callback=self.exec_cb,
                                                callback_group=ReentrantCallbackGroup()                                         
                                            )
        self.remote_control_publisher_ = self.create_publisher(MotorDriver, 'motor_driver', 10)
        self.get_logger().info("My name is Optimus Pi, Leader of the TurtleBots")
        
    
    # +++++++++++++++
    # Camera Control   -> Msg from camera, opens live feed on screen if connected
    # +++++++++++++++    
    def open_optimus_view_cb(self, msg):
        # img_converted_back_to_cv = self.cv_bridge_obj_.imgmsg_to_cv2(msg)
        # cv2.imshow('camera', img_converted_back_to_cv)
        # cv2.waitKey(1)
        self.get_logger().info('img received')


    # +++++++++++++
    # User Control  -> Actions/Goals from PS4 Controller
    # +++++++++++++
    def goal_cb(self, goal_request: ControlOptimus.Goal): # THIS IS CALLED WHEN A GAOL IS RECEIVED
        self.get_logger().info('Goal Received')
        # Check motor values do not exceed Pi PWM range
        if goal_request.left_motor_1 < 0 or goal_request.left_motor_1 > 100 or \
            goal_request.left_motor_2 < 0 or goal_request.left_motor_2 > 100 or \
            goal_request.right_motor_1 < 0 or goal_request.right_motor_1 > 100 or \
            goal_request.right_motor_2 < 0 or goal_request.right_motor_2 > 100:
            self.get_logger().warn('Goal Rejected: PWM values are outside the range of 0-100')
            return GoalResponse.REJECT
        # Cancel any current goal and accept the new goal
        with self.goal_lock:
            if self.goal_handle_ is not None and self.goal_handle_.is_active:
                self.get_logger().warn("Aborting previous Goal, You have the cons...")
                return GoalResponse.REJECT
        self.get_logger().info('Goal Accepted')
        return GoalResponse.ACCEPT

    def handle_accept_cb(self, goal_handle: ServerGoalHandle): # called when a goal is accpeted
        with self.goal_lock:
            if self.goal_handle_ is not None: # Not limited to checking .is_active
                # we can do anything with incoming goals, like add to a queue
                self.get_logger().info("got it")
            goal_handle.execute()
    
    def cancle_goal_cb(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Canceling goal per user request")
        return CancelResponse.ACCEPT # Or .REJECT will work too
    
    def exec_cb(self, goal_handle: ServerGoalHandle):
        self.get_logger().info('sending Message')
        # Set goal_handle as class attr
        with self.goal_lock:
            self.goal_handle_ = goal_handle
        # Check for record request
        if goal_handle.request.is_recording: # Create subscription
            self.get_logger().info('Turning on Camera')
            self.camera_subscriber_ = self.create_subscription(Image, 'optimus_eye', self.open_optimus_view_cb, 60)
        elif not goal_handle.request.is_recording and self.camera_subscriber_ is not None: # End subscription
            self.get_logger().info('Turning off Camera')
            self.destroy_subscription(self.camera_subscriber_)
            self.camera_subscriber_ = None

        # Check for autonomous drive
        if goal_handle.request.is_autonomous: # Create subscription
            self.is_autonomous_ = True
            self.range_subscriber_ = self.create_subscription(UltraSonicRange, 'ultra_sonic_range', self.step_cb, 10)
            self.get_logger().info('autodrive activated')
        elif not goal_handle.request.is_autonomous and self.range_subscriber_ is not None: # End subscription
            self.is_autonomous_ = False
            self.destroy_subscription(self.range_subscriber_)
            self.range_subscriber_ = None
            self.get_logger().info('autodrive deactivate')
        # Get Goal Properties
        left_motor_1 = goal_handle.request.left_motor_1
        left_motor_2 = goal_handle.request.left_motor_2
        right_motor_1 = goal_handle.request.right_motor_1
        right_motor_2 = goal_handle.request.right_motor_2
        # prefom task
        feedback = ControlOptimus.Feedback()
        result = ControlOptimus.Result()
        msg = MotorDriver()
        msg.motor_pwm_values = [
                            left_motor_1,
                            left_motor_2,
                            right_motor_1,
                            right_motor_2,
                        ]
        self.remote_control_publisher_.publish(msg)
        # Send Feedback
        whos_driving = "Optimus is driving" if self.is_autonomous_ else "You have the cons"
        feedback.message = whos_driving
        goal_handle.publish_feedback(feedback)
        # Set Final State
        goal_handle.succeed()
        # send back results
        result.message = whos_driving
        result.is_autonomous = self.is_autonomous_
        return result
        

    # =================
    # Autonomous Drive  -> Msg/Srv - get msg from sensor, choose command, send req to motor
    # =================
    def set_cmd(self, cmd): # <- send cmd to motor / calls set_cmd_cb
        client = self.create_client(AutonomousDriver,'autonomous_driver')
        while not client.wait_for_service(1.0):
            self.get_logger().warn('Searching for Motor Driver...')
        req = AutonomousDriver.Request()
        req.command = cmd
        future_obj = client.call_async(req)
        future_obj.add_done_callback(partial(self.set_cmd_cb, cmd=cmd))
    
    def set_cmd_cb(self, future, cmd): # <- just logs response, can do more
        try:
            sec, nanosec = self.get_clock().now().seconds_nanoseconds() # another tool
            res = future.result()
            self.get_logger().info(f'At: S-{sec}/NS-{nanosec} || Command: {cmd}, response: {res}')
        except Exception as e:
            self.get_logger().error(f'Service Failed: {e}')

    def step_cb(self, msg): # <- takes sensor data and decides action
        debug_message = msg.debug_message
        self.get_logger().info(f"Debug Message{debug_message}")
        left_track_dist = msg.left_track_dist
        right_track_dist = msg.right_track_dist
        new_cmd = 0
        if right_track_dist < 15 and left_track_dist < 15:
            self.get_logger().info("Turn Around")
            new_cmd = 5
        elif left_track_dist < 35 or right_track_dist < 35:
            if left_track_dist < right_track_dist:
                self.get_logger().info("Turn Hard Right")
                new_cmd = 4
            else:
                self.get_logger().info("Turn Hard Left")
                new_cmd = 3
        elif left_track_dist < 45 or right_track_dist < 45:
            if left_track_dist < right_track_dist:
                self.get_logger().info("Turn Soft Right")
                new_cmd = 2
            else:
                self.get_logger().info("Turn Soft Left")
                new_cmd = 1
        else:
            self.get_logger().info("Go Straight")
        self.set_cmd(new_cmd)
        
def main(args=None):
    rclpy.init(args=args)
    node = OptimusPiNode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__ == "__main__":
    main()
    cv2.destroyAllWindows()