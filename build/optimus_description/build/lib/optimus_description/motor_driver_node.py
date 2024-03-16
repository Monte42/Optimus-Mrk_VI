#!/usr/bin/env python3
import time
import rclpy
import RPi.GPIO as GPIO
from rclpy.node import Node
from functools import partial

from optimus_interfaces.msg import MotorDriver
from optimus_interfaces.srv import AutonomousDriver


# SETPINS AND VARIABLES
# ======================
left_motor_1 = 33
left_motor_2 = 37
right_motor_1 = 32
right_motor_2 = 36

DUTY = 60



# SETUP Pi's GPIO BOARD
# ======================
def setup():
    GPIO.setmode(GPIO.BOARD)
    GPIO.setup(left_motor_1, GPIO.OUT)
    GPIO.output(left_motor_1, GPIO.LOW)
    GPIO.setup(left_motor_2, GPIO.OUT)
    GPIO.output(left_motor_2, GPIO.LOW)
    GPIO.setup(right_motor_1, GPIO.OUT)
    GPIO.output(right_motor_1, GPIO.LOW)
    GPIO.setup(right_motor_2, GPIO.OUT)
    GPIO.output(right_motor_2, GPIO.LOW)
    
    global left_motor_1_p, left_motor_2_p, right_motor_1_p, right_motor_2_p

    left_motor_1_p = GPIO.PWM(left_motor_1, 1000)
    left_motor_1_p.start(0)
    left_motor_2_p = GPIO.PWM(left_motor_2, 1000)
    left_motor_2_p.start(0)
    right_motor_1_p = GPIO.PWM(right_motor_1, 1000)
    right_motor_1_p.start(0)
    right_motor_2_p = GPIO.PWM(right_motor_2, 1000)
    right_motor_2_p.start(0)


# ROS NODE FOR MOTOR DRIVERS
# ===========================
class MotorDriverNode(Node):
    def __init__(self):
        super().__init__("motor_driver")
        # Service to wait for calls from the autonomous driver
        self.autonomous_driver_server_ = self.create_service(AutonomousDriver, 'autonomous_driver', self.autonomous_driver_cb)
        # Subcrtiption to PS4 controller
        self.motor_driver_subscriber_ = self.create_subscription(MotorDriver, "motor_driver", self.motor_driver_cb, 10)
        self.get_logger().info("Motors are ready...")

    def motor_driver_cb(self, msg):
        l1,l2,r1,r2 = msg.motor_pwm_values
        self.get_logger().info(f'Lft pin1: {l1},Lft pin2: {l2},rht pin1: {r1},rht pin2: {r2}')
        self.action(l1, l2, r1, r2)


    def action(self, lt_mtr_1, lt_mtr_2, rt_mtr_1, rt_mtr_2, sleep=False):
        left_motor_1_p.ChangeDutyCycle(lt_mtr_1)
        left_motor_2_p.ChangeDutyCycle(lt_mtr_2)
        right_motor_1_p.ChangeDutyCycle(rt_mtr_1)
        right_motor_2_p.ChangeDutyCycle(rt_mtr_2)
        if sleep: time.sleep(1.4)
        
    def autonomous_driver_cb(self, req, res):
        try:
            cmd = req.command
            if cmd == 1: # Soft Left
                print(f'turn left {cmd}')
                self.action(DUTY*.6, 0, DUTY, 0)
            elif cmd == 2: # Soft Right
                print(f'turn right {cmd}')
                self.action(DUTY, 0, DUTY*.6, 0)
            elif cmd == 3: # Hard Left
                print(f'turn hard left {cmd}')
                self.action(0, 0, DUTY, 0)
            elif cmd == 4: # Hard Right
                print(f'turn hard right {cmd}')
                self.action(DUTY, 0, 0, 0)
            elif cmd == 5: # Turn Around
                print(f'turn arround {cmd}')
                self.action(DUTY, 0 , 0, DUTY, sleep=True)
            else: # straight
                print(f'straight {cmd}')
                self.action(DUTY, 0, DUTY, 0)
            res.success = True
        except:
            res.success = False
        return res
            


def main(args=None):
    setup()
    try:
        rclpy.init(args=args)
        node = MotorDriverNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        GPIO.cleanup()

if __name__ == "__main__":
    main()