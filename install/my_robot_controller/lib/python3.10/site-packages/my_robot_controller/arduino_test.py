import rclpy
from rclpy.node import Node
from my_robot_interface.msg import ServoState

class ArduinoTestNode(Node):
    def __init__(self):
        super().__init__("arduino_test")
        self.suncriber_ = self.create_subscription(
            ServoState,"servo_states",self.callback_arduino_test,10)
        self.sevo_state_now_ = [ 0, 0]
        self.get_logger().info(" Started")

    def callback_arduino_test(self,msg):

        self.servo_states_new_ = msg.servo_states
        if self.servo_states_new_ [ 0 ] == self.sevo_state_now_ [0] :
            self.get_logger().info(" 0 thay doi")
        else:
            self.get_logger().info(str(self.servo_states_new_ [0]))

        if self.servo_states_new_ [ 1 ] == self.sevo_state_now_ [1] :
            self.get_logger().info(" 0 thay doi")
        else:
            self.get_logger().info(str(self.servo_states_new_ [0]))
        self.sevo_state_now_ = msg.servo_states


def main(args=None):
    rclpy.init(args=args)
    node = ArduinoTestNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()