#!/usr/bin/env python3
import rclpy
from rclpy.lifecycle.node import LifecycleNode
from lifecycle_msgs.srv import ChangeState
from lifecycle_msgs.msg import Transition

class LifcycleNodeManager(LifecycleNode):
    def __init__(self):
        super().__init__('lifecycle_manager',)
        self.declare_parameter('managed_node_name', rclpy.Parameter.Type.STRING)
        node_name = self.get_parameter('managed_node_name').value
        service_change_state_name = f'/{node_name}/change_state'
        self.client = self.create_client(ChangeState, service_change_state_name)
    
    def change_state(self, transtion: Transition):
        self.client.wait_for_service()
        req = ChangeState.Request()
        req.transition = transtion
        future_obj = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future_obj)

    def configure_lifecycle_node(self):
        transition = Transition()
        transition.id = Transition.TRANSITION_CONFIGURE
        transition.label = 'configure'
        self.change_state(transition)

    def unconfigure_lifecycle_node(self):
        transition = Transition()
        transition.id = Transition.TRANSITION_CLEANUP
        transition.label = 'unconfigure'
        self.change_state(transition)

    def activate_lifecycle_node(self):
        transition = Transition()
        transition.id = Transition.TRANSITION_ACTIVATE
        transition.label = 'activate'
        self.change_state(transition)

    def deactivate_lifecycle_node(self):
        transition = Transition()
        transition.id = Transition.TRANSITION_DEACTIVATE
        transition.label = 'deactivate'
        self.change_state(transition)

    def shutdown_lifecycle_node(self):
        transition = Transition()
        transition.id = Transition.TRANSITION_ACTIVE_SHUTDOWN
        transition.label = 'shutdown'
        self.change_state(transition)
          


def main(args=None):
    rclpy.init(args=args)
    node = LifcycleNodeManager()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()