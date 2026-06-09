import rclpy
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from rclpy.node import Node
from rclpy.task import Future

from sfr_ca7_interface_package.action import MoveIn1D

class Nectarine(Node):

    def __init__(self):
        super().__init__('nectarine')

        self.action_client = ActionClient(self, MoveIn1D, '/tighten')

        self.send_goal_future = None
        self.get_result_future = None
        
    def send_goal_async(self, goal_value: float) -> None:

        goal_msg = MoveIn1D.Goal()
        goal_msg.goal_value = goal_value

        while not self.action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info(f'action {self.action_client} not available, waiting...')

        self.get_logger().info(f'Sending goal: {goal_value}.')
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
        response: MoveIn1D.Result = future.result()
        self.get_logger().info(f'Final sequence was: {response.result.end_value}.')
        self.send_next_goal()

    def action_feedback_callback(self, feedback_msg: MoveIn1D.Feedback) -> None:
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback: {feedback.current_value}.')


def main(args=None):

    try:
        rclpy.init(args=args)

        node = Nectarine()
        
        rclpy.spin(node)
    
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
