import time

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from rclpy.task import Future

from geometry_msgs.msg import Pose, PoseStamped
from nav2_msgs.action import NavigateToPose

class GammaSystemNavigationNode(Node):

    def __init__(self):
        super().__init__('gamma_system_navigation_node')

        self._topic = '/initialpose'
        self.action_client = ActionClient(self, NavigateToPose, '/navigate_to_pose')

        self.send_goal_future = None # This will be used in `send_goal`
        self.get_result_future = None # This will be used in 'goal_response_callback'

        self.publisher = self.create_publisher(
            msg_type=PoseWithCovarianceStamped,
            topic=self._topic,
            qos_profile=1)

        publisher_count = 0
        while publisher_count < 2:
            publisher_count = self.count_publishers(self._topic)
            print(f"Waiting for publisher to be connected to {self._topic}.")
            print(f"Publisher count is {publisher_count}.")
            time.sleep(1)
            
        self.get_logger().info('Waiting for nav2 topic...')
        while not self.action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('nav2 topic not available yet, waiting...')
        self.get_logger().info('nav2 topic is available.')

    def send_initial_pose_with_covariance(self):

        print(f"Publishing pose to topic: {self._topic}.")

        pwcs = PoseWithCovarianceStamped()
        pwcs.header.stamp = self.get_clock().now().to_msg()
        pwcs.header.frame_id = 'map'

        pwcs.pose.pose.position.x = 0.25
        pwcs.pose.pose.position.y = 0.01
        pwcs.pose.pose.position.z = 0.00

        pwcs.pose.pose.orientation.w = 1.0
        pwcs.pose.pose.orientation.x = 0.0
        pwcs.pose.pose.orientation.y = 0.0
        pwcs.pose.pose.orientation.z = 0.0

        pwcs.pose.covariance[0] = 0.25
        pwcs.pose.covariance[7] = 0.25
        pwcs.pose.covariance[14] = 0.25
        pwcs.pose.covariance[35] = 0.068

        self.publisher.publish(pwcs)
        
    def send_goal_async(self, desired_pose: Pose, behaviour_tree: str) -> None:
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.stamp = self.get_clock().now().to_msg()
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.pose = desired_pose
        goal_msg.behavior_tree = behaviour_tree

        while not self.action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info(f'action {self.action_client} not available, waiting...')

        self.get_logger().info(f'Sending goal: {goal_msg}.')

        self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.action_feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future: Future) -> None:
        goal: ClientGoalHandle = future.result()

        if not goal.accepted:
            self.get_logger().info('Goal was rejected by the server.')
            return
        self.get_logger().info('Goal was accepted by the server.')

        self.get_result_future = goal.get_result_async()
        self.get_result_future.add_done_callback(self.action_result_callback)

    def action_result_callback(self, future: Future) -> None:
        result: NavigateToPose.Result = future.result()
        self.get_logger().info(f'Final position was: {result.result}.')

    def action_feedback_callback(self, feedback_msg: NavigateToPose.Feedback) -> None:
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback distance: {feedback.distance_remaining}.')


def main(args=None):

    try:
        rclpy.init(args=args)
        node = GammaSystemNavigationNode()
        node.send_initial_pose_with_covariance()
        time.sleep(5.0)
        desired_pose = Pose()
        desired_pose.position.x = 22.2
        desired_pose.position.y = -6.9
        desired_pose.orientation.w = 1.0

        node.send_goal_async(desired_pose, "")
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)

if __name__ == '__main__':
    main()
