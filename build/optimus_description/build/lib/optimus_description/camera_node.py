#!/usr/bin/env python3
import rclpy
from rclpy.lifecycle import LifecycleNode
from cv_bridge import CvBridge
import cv2
from rclpy.lifecycle.node import LifecycleState, TransitionCallbackReturn

from sensor_msgs.msg import Image


class CameraNode(LifecycleNode):
    def __init__(self):
        super().__init__("camera")
        self.camera_publisher_ = None
        self.camera_timer_ = None
        self.video_capture_obj_ = cv2.VideoCapture(0) # <-- maybe grabs /dev/video0 ??
        self.cv_bridge_obj_ = CvBridge()
        self.camera_dimensions_ = (int(self.video_capture_obj_.get(cv2.CAP_PROP_FRAME_WIDTH)),
                                   int(self.video_capture_obj_.get(cv2.CAP_PROP_FRAME_HEIGHT)))
        self.camera_fps_ = int(self.video_capture_obj_.get(cv2.CAP_PROP_FPS))
        self.all_frames_ = []
        self.get_logger().info("Camera Node Unconfigured...")


    # ================
    # Lifecycle Funcs
    # ================
    def on_configure(self, state: LifecycleState):
        try:
            self.camera_publisher_ = self.create_lifecycle_publisher(Image, 'optimus_eye', 60)
            self.get_logger().info("Camera Node Configured...")
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            self.get_logger().warn(f"In on_configure ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_cleanup(self, state: LifecycleState):
        try:
            self.get_logger().info("Camera Node Clean up...")
            self.destroy_publisher(self.camera_publisher_)
            self.camera_publisher_ = None
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            self.get_logger().warn(f"In on_cleanup ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_activate(self, state: LifecycleState):
        try:
            self.get_logger().info("Camera Node Activated...")
            self.camera_timer_ = self.create_timer(0.03333, self.capture_and_publish_image_cb)
            return super().on_activate(state)
        except Exception as e:
            self.get_logger().warn(f"In on_activate ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_deactivate(self, state: LifecycleState):
        try:
            # a = 10 / 0 # <-- this is to test the on_error
            self.get_logger().info("Camera Node Deactivated...")
            self.destroy_timer(self.camera_timer_)
            self.camera_node_cleanup()
            return super().on_deactivate(state)
        except Exception as e:
            self.get_logger().warn(f"In on_deactivate ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_shutdown(self, state: LifecycleState):
        try:
            self.get_logger().info("Camera Node Is Shuting Down...")
            if self.camera_publisher_ is not None:
                self.destroy_lifecycle_publisher(self.camera_publisher_)
            if self.camera_timer_ is not None:
                self.destroy_timer(self.camera_timer_)
            self.camera_node_cleanup()
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            self.get_logger().warn(f"In on_shutdown ERROR: {e}")
            return TransitionCallbackReturn.ERROR
        
    def on_error(self, state: LifecycleState):
        self.camera_node_cleanup()
        self.get_logger().error("Camera sys failed..")
        return TransitionCallbackReturn.FAILURE
        


    # ==============
    # Camera Funcs
    # ==============
    def capture_and_publish_image_cb(self):
        returned_value, captured_frame = self.video_capture_obj_.read()
        if returned_value == True:
            captured_frame = cv2.rotate(captured_frame, cv2.ROTATE_180)
            self.all_frames_.append(captured_frame)
            image_to_transmit = self.cv_bridge_obj_.cv2_to_imgmsg(captured_frame)
            self.camera_publisher_.publish(image_to_transmit)
            self.get_logger().info('Image Sent')
                
    def camera_node_cleanup(self):
        self.destroy_lifecycle_publisher(self.camera_publisher_)
        self.destroy_timer(self.camera_timer_)
        if len(self.all_frames_) > 0:
            self.get_logger().info('saving file..')
            filename = 'optimus_eye.avi'
            fourccCode = cv2.VideoWriter_fourcc(*'DIVX')
            new_video = cv2.VideoWriter(filename, fourccCode, self.camera_fps_, self.camera_dimensions_)
            for frame in self.all_frames_:
                new_video.write(frame)
            self.all_frames_ = []
            new_video.release()
            self.video_capture_obj_.release()
            cv2.destroyAllWindows()
            self.get_logger().info('file saved')
            
                
                

def main(args=None):
    rclpy.init(args=args)
    node = CameraNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()