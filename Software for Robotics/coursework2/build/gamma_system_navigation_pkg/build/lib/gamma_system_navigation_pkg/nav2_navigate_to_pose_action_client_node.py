
import rclpy
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from rclpy.node import Node
from rclpy.task import Future

from geometry_msgs.msg import Pose, PoseStamped
from nav2_msgs.action import NavigateToPose

class Nav2NavigateToPoseActionClient(Node):
    """A ROS2 Node with an Action Client for Nav2NavigateToPoseActionClient."""

    def __init__(self):
        super().__init__('nav2_navigate_to_pose_action_client')

        self.action_client = ActionClient(self, NavigateToPose, '/navigate_to_pose')

        self.send_goal_future = None # This will be used in `send_goal`
        self.get_result_future = None # This will be used in 'goal_response_callback'

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
    """
    The main function.
    :param args: Not used directly by the user, but used by ROS2 to configure certain aspects of the Node.
    """
    try:
        rclpy.init(args=args)

        node = Nav2NavigateToPoseActionClient()

        desired_pose = Pose()
        desired_pose.position.x = 1.0
        desired_pose.position.y = -1.0
        desired_pose.orientation.w = 1.0

        node.send_goal_async(desired_pose, "")

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
