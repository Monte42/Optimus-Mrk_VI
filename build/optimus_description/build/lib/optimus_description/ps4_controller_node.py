#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
from pyPS4Controller.controller import Controller

from optimus_interfaces.action import ControlOptimus
from lifecycle_msgs.srv import ChangeState, GetState
from lifecycle_msgs.msg import Transition


# ++++++++++++++++++++++++++++++++
# THIS IS THE CONTROLLER INSTANCE
# ++++++++++++++++++++++++++++++++
# It inherits both Node and Controller and does the job of both (can't breake them up)
# Node is needed to communicate with other node and Controller can't talk to nodes
# If you intitiate the controller, the prog stops & the node wont start
# If you intitiate the node, the prog stops & the controller wont start
class MainController(Node, Controller):
    def __init__(self, **kwargs):
        Controller.__init__(self, **kwargs)
        super().__init__('ps4_controller') # <- do not add this node to scripts in setup
        self.is_autonomous_ = False
        self.is_recording_ = False
        self.left_motor_1_ = 0
        self.left_motor_2_ = 0
        self.right_motor_1_ = 0
        self.right_motor_2_ = 0
        self.optimus_controller_client_ = ActionClient(self, ControlOptimus, 'main_controller')
        # Unconfigure Life Cycle nodes here / PS4 wont talk to Optimus when one is running
        self.change_lifecycle_node_state('optimus_ultra_sonic_sensor', 1, 'configure')
        self.change_lifecycle_node_state('optimus_camera', 1, 'configure')
        self.get_logger().info("Controller is awaiting commands...")
        

    # Operate Lifecycle Nodes {1:configure, 2:unconfigure, 3:activate, 4:deactivate, 5:shutdown}
    def change_lifecycle_node_state(self, working_node, state_id, state_label):
        client = self.create_client(ChangeState, f'/{working_node}/change_state')
        while not client.wait_for_service(1.0):
            self.get_logger().warn(f'Searching for {working_node}...')
        transition = Transition()
        transition.id = state_id
        transition.label = state_label
        req = ChangeState.Request()
        req.transition = transition
        future_obj = client.call_async(req)
        rclpy.spin_until_future_complete(self, future_obj)


    # ========================
    # Action - ControlOptimus -> send req / reveice res
    # ========================
    def send_goal(self):
        # wait for server
        self.optimus_controller_client_.wait_for_server()
        # create goal
        goal = ControlOptimus.Goal()
        goal.left_motor_1 = self.left_motor_1_
        goal.left_motor_2 = self.left_motor_2_
        goal.right_motor_1 = self.right_motor_1_
        goal.right_motor_2 = self.right_motor_2_
        goal.is_autonomous = self.is_autonomous_
        goal.is_recording = self.is_recording_
        # send goal
        self.optimus_controller_client_.send_goal_async(goal, self.goal_feedback_cb).add_done_callback(self.goal_response_cb)
    
    def goal_feedback_cb(self, feedback_msg):
        msg = feedback_msg.feedback.message
        self.get_logger().info(f'** FEEDBACK: {msg}')
        
    def goal_response_cb(self, future):
        self.goal_handle_: ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("Goal Accepted")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_cb)
        else: self.get_logger().info("Goal Rejected")

    def goal_result_cb(self, future):
        status = future.result().status
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED: self.get_logger().info("Goal Succeded")
        if status == GoalStatus.STATUS_ABORTED: self.get_logger().error("Goal Aborted")
        if status == GoalStatus.STATUS_CANCELED: self.get_logger().warn("Goal Cancelled")
        self.get_logger().info(f"Self Drive Status Updated: {self.is_autonomous_}")
    
    def cancel_goal(self):
        self.get_logger.info("Cancelling Goal")
        self.goal_handle_.cancel_goal_async()

    def set_motor_params_and_send_goal(self, lt1=None, lt2=None, rt1=None, rt2=None):
        if lt1 is not None: self.left_motor_1_ = lt1
        if lt2 is not None: self.left_motor_2_ = lt2
        if rt1 is not None: self.right_motor_1_ = rt1
        if rt2 is not None: self.right_motor_2_ = rt2
        self.send_goal()


    # ===============
    # PS4 Controller -> set button functionallity
    # ===============       https://github.com/ArturSpirin/pyPS4Controller/blob/master/README.md
    def on_x_press(self):
        self.is_autonomous_ = not self.is_autonomous_ 
        self.get_logger().info(f"stuo {self.is_autonomous_}")
        if self.is_autonomous_:
            self.get_logger().info("Activating autonomous drive")
            self.change_lifecycle_node_state('optimus_ultra_sonic_sensor', 3, 'activate')
        else:
            self.get_logger().info("Deactivating autonomous drive")
            self.change_lifecycle_node_state('optimus_ultra_sonic_sensor', 4, 'deactivate')
        self.set_motor_params_and_send_goal(lt1=0,lt2=0,rt1=0,rt2=0)
    
    def on_triangle_press(self):
        self.is_recording_ = not self.is_recording_ 
        if self.is_recording_:
            self.get_logger().info("Activating recording")
            self.change_lifecycle_node_state('optimus_camera', 3, 'activate')
        else:
            self.get_logger().info("Deactivating recording")
            self.change_lifecycle_node_state('optimus_camera', 4, 'deactivate')
        self.send_goal()
    
    def on_L3_up(self, value):
        if not self.is_autonomous_:
            curr_duty = abs(round(value/327.67))
            self.left_motor_1_ = curr_duty
            self.send_goal()

    def on_L3_down(self, value):
        if not self.is_autonomous_:
            curr_duty = abs(round(value/327.67))
            self.left_motor_2_ = curr_duty
            self.send_goal()
        
    def on_L3_y_at_rest(self):
        self.set_motor_params_and_send_goal(lt1=0,lt2=0)

    def on_R3_up(self, value):
        if not self.is_autonomous_:
            curr_duty = abs(round(value/327.67))
            self.right_motor_1_ = curr_duty
            self.send_goal()

    def on_R3_down(self, value):
        if not self.is_autonomous_:
            curr_duty = abs(round(value/327.67))
            self.right_motor_2_ = curr_duty
            self.send_goal()

    def on_R3_y_at_rest(self):
        self.set_motor_params_and_send_goal(rt1=0,rt2=0)


# This is the Node the we will spin.  We also initate the PS4 controller as a class attr.
# Then listen to the controller, this is what stops the program
# This way call both .spin() and .listen() at the same time.
class Ps4ControllerNode(Node):
    def __init__(self):
        super().__init__("ps4_controller") # <- add this node to scripts in setup
        self.controller_ =  MainController(interface="/dev/input/js0", connecting_using_ds4drv=False)
        self.controller_.listen(timeout=60) # wait 60 sec to connect


def main(args=None):
    rclpy.init(args=args)
    node = Ps4ControllerNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()