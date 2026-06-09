import time
from math import sqrt

import rclpy
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
from rclpy.node import Node

from sfr_ca7_interface_package.action import MoveIn1D


class Computer(Node):

    def __init__(self):
        super().__init__('computer')
        self.internal_value = 0
        self.MAX_ITERATIONS: int  = 20
        #self.step: float = 0.01

        self.action_server = ActionServer(
            self,
            MoveIn1D,
            '/tighten',
            self.execute_callback)


    def execute_callback(self, goal: ServerGoalHandle, goal_value: float) -> MoveIn1D.Result:
    
        feedback_msg = MoveIn1D.Feedback()
        
        for i in range(self.MAX_ITERATIONS):
            internal_value = internal_value + 0.01 
            x = goal_value - internal_value
            feedback_msg.current_value = internal_value
            goal.publish_feedback(feedback_msg)
            
            if x < 0.01 :
                goal.succeed()
                break
            time.sleep(1)
        
        result = MoveIn1D.Result()
        result.end_value = self.internal_value
        return result


def main(args=None):
    try:
        rclpy.init(args=args)

        node = Computer()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)

if __name__ == '__main__':
    main()
