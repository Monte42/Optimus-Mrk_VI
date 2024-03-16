#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node, LifecycleNode

def generate_launch_description():
    ld = LaunchDescription()
    
    ultra_sonsic_sensor_node = LifecycleNode(
        package='optimus_description',
        executable='ultra_sonic_sensor',
        name='optimus_camera',
        namespace='bot__comp_1'
    )
    camera_node = LifecycleNode(
        package='optimus_description',
        executable='camera',
        name='optimus_ultra_sonic_sensor',
        namespace='bot_comp_2'
    )
    optimus_pi_node = Node(
        package='optimus_description',
        executable='optimus_pi'
    )
    motor_driver_node = Node(
        package='optimus_description',
        executable='motor_driver'
    )
    ps4_controller_node = Node(
        package='optimus_description',
        executable='ps4_controller'
    )
    

    ld.add_action(camera_node)
    ld.add_action(ultra_sonsic_sensor_node)
    ld.add_action(motor_driver_node)
    ld.add_action(optimus_pi_node)
    ld.add_action(ps4_controller_node)
    
    return ld