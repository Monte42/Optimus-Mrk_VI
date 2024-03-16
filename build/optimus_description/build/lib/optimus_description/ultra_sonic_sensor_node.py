#!/usr/bin/env python3
import time
import rclpy
import RPi.GPIO as GPIO
from rclpy.lifecycle import LifecycleNode
from rclpy.lifecycle.node import LifecycleState, TransitionCallbackReturn

from optimus_interfaces.msg import UltraSonicRange


# left sensor
lft_trig_pin = 16
lft_echo_pin = 18
# Right Sensor
rht_trig_pin = 11
rht_echo_pin = 13

MAX_DISTANCE = 220
time_out = MAX_DISTANCE * 60



def setup():
    GPIO.setmode(GPIO.BOARD)
    GPIO.setup(lft_trig_pin, GPIO.OUT)
    GPIO.setup(lft_echo_pin, GPIO.IN)
    GPIO.setup(rht_trig_pin, GPIO.OUT)
    GPIO.setup(rht_echo_pin, GPIO.IN)




class Ultra_sonic_sensor_node(LifecycleNode):
    def __init__(self):
        super().__init__("ultra_sonic_sensor")
        self.range_publisher_ = None
        self.scan_timer_ = None
        
        self.get_logger().info("Ultra Sonsic Sensor Unconfigured...")

    
    
    # ================
    # Lifecycle Funcs
    # ================
    def on_configure(self, state: LifecycleState):
        try:
            self.get_logger().info("Ultra Sonsic Sensor Node Configured...")
            self.range_publisher_ = self.create_publisher(UltraSonicRange, 'ultra_sonic_range', 10)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            self.get_logger().warn(f"In on_configure ERROR: {e}")
            return TransitionCallbackReturn.ERROR
    
    def on_cleanup(self, state: LifecycleState):
        try:
            self.get_logger().info("Ultra Sonsic Sensor Node Node Clean up...")
            self.destroy_lifecycle_publisher(self.range_publisher_)
            self.range_publisher_ = None
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            self.get_logger().warn(f"In on_cleanup ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_activate(self, state: LifecycleState):
        try:
            self.get_logger().info("Ultra Sonsic Sensor Node Node Activated...")
            self.scan_timer_ = self.create_timer(0.2, self.publish_ultra_sonic_range_cb)
            return super().on_activate(state)
        except Exception as e:
            self.get_logger().warn(f"In on_activate ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_deactivate(self, state: LifecycleState):
        try:
            # a = 10 / 0 # <-- this is to test the on_error
            self.get_logger().info("Ultra Sonsic Sensor Node Node Deactivated...")
            self.destroy_timer(self.scan_timer_)
            self.scan_timer_ = None
            return super().on_deactivate(state)
        except Exception as e:
            self.get_logger().warn(f"In on_deactivate ERROR: {e}")
            return TransitionCallbackReturn.ERROR

    def on_shutdown(self, state: LifecycleState):
        try:
            self.get_logger().info("Ultra Sonsic Sensor Node Node Is Shuting Down...")
            # Shutdown can be called from anystate, check and destroy all coms
            if self.range_publisher_ is not None:
                self.destroy_lifecycle_publisher(self.range_publisher_)
            if self.scan_timer_ is not None:
                self.destroy_timer(self.scan_timer_)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            self.get_logger().warn(f"In on_shutdown ERROR: {e}")
            return TransitionCallbackReturn.ERROR
        
    def on_error(self, state: LifecycleState):
        self.get_logger().error("Ultra Sonsic Sensor Node sys failed..")
        return TransitionCallbackReturn.FAILURE


    # ==============
    # Scanner Funcs
    # ==============
    def scan_for_ranges(self):
        lft_snsr_dist = self.get_pulse_distance(lft_trig_pin,lft_echo_pin)
        time.sleep(0.005)
        rht_snsr_dist = self.get_pulse_distance(rht_trig_pin,rht_echo_pin)
        # lft_snsr_dist = 0.101
        self.get_logger().info(f"Left Track: {rht_snsr_dist}\tRight Track: {lft_snsr_dist}")
        
        return lft_snsr_dist, rht_snsr_dist
    
    def publish_ultra_sonic_range_cb(self):
        lt_snsr_dist, rt_snsr_dist = self.scan_for_ranges()
        msg = UltraSonicRange()
        # invert sensors / left sensor monitors right track
        msg.left_track_dist = rt_snsr_dist
        msg.right_track_dist = lt_snsr_dist
        # Check that sensors are functioning
        if lt_snsr_dist is not None and rt_snsr_dist is not None:
            msg.debug_message = "Ultra Sonic Board Status: GOOD"
        else:
            msg.debug_message = "Ultra Sonic Board Status: BAD"
        # Publish
        self.range_publisher_.publish(msg)

    def get_pulse_time(self, pin, level, time_out):
        t_0 = time.time()
        while GPIO.input(pin) != level:
            if (time.time()-t_0) > (time_out*0.000001):
                return 0
        t_0 = time.time()
        while GPIO.input(pin) == level:
            if (time.time()-t_0) > (time_out*0.000001):
                return 13120 # <-- ADJ THIS SO MAX OUT OF get_pulse_dist IS 220 
        return (time.time() - t_0)*1000000

    def get_pulse_distance(self, trigger, echo):
        GPIO.output(trigger, GPIO.HIGH)
        time.sleep(0.00001)
        GPIO.output(trigger, GPIO.LOW)
        ping_time = self.get_pulse_time(echo,GPIO.HIGH, time_out)
        return ping_time * 340. / 2. / 10000.     
            
    


def main(args=None):
    setup()
    try:
        rclpy.init(args=args)
        node = Ultra_sonic_sensor_node()
        rclpy.spin(node)
    except KeyboardInterrupt:
        GPIO.cleanup()

if __name__ == "__main__":
    main()