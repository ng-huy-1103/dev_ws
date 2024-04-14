    #!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
from my_robot_interface.msg import ServoState

class ArduinoControllerNode(Node):
    def __init__(self):
        super().__init__("arduino_controller")
       
        self.servo_states_ = [90 , 90]
        self.servo_states_publisher_ = self.create_publisher(
            ServoState, "servo_states", 10)
        self.servo_states_timer_ = self.create_timer(1, self.publish_servo_states )
        self.get_logger().info("Pi controller node has been started.")
            
            
    def publish_servo_states(self):
        msg = ServoState()
        msg.servo_states = self.servo_states_
        self.servo_states_publisher_.publish(msg)
        # self.servo_states_[0]+=1
        # self.servo_states_[1]+=1

def main(args=None):
    rclpy.init(args=args)
    node = ArduinoControllerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()