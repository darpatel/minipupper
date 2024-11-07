import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
import cv2
from cv_bridge import CvBridge

class LineFollower(Node):
    def __init__(self):
        super().__init__('line_follower_node')

        # Threshold value for detecting the black line
        self.declare_parameter('threshold', 50)  # Declare the threshold parameter (default = 50)

        # Subscribe to the image topic
        self.subscription = self.create_subscription(
            Image,
            '/image_raw',
            self.image_callback,
            10)
        self.subscription  # prevent unused variable warning
        
        # Publisher for velocity commands
        self.cmd_vel_publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # For converting between ROS Image messages and OpenCV images
        self.bridge = CvBridge()
        
        # To store the previous error for derivative control (if using PD control)
        self.prev_error = 0

    def image_callback(self, msg):
        # Convert the ROS Image message to a format OpenCV can use
        cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        # Convert the image to grayscale
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        
        # Get the threshold value from the node parameters
        threshold_value = self.get_parameter('threshold').value
        
        # Threshold the image to isolate black areas (which we assume is the line)
        _, binary = cv2.threshold(gray, threshold_value, 255, cv2.THRESH_BINARY_INV)
        
        # Find the contours of the black areas (line)
        contours, _ = cv2.findContours(binary, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        
        if contours:
            # Find the largest contour
            largest_contour = max(contours, key=cv2.contourArea)
            M = cv2.moments(largest_contour)
            
            if M['m00'] > 0:
                # Calculate the center of the contour
                cx = int(M['m10'] / M['m00'])
                cy = int(M['m01'] / M['m00'])
                
                # Image width (for proportional control)
                image_center = cv_image.shape[1] // 2
                
                # Calculate the error between the line position and the image center
                error = cx - image_center
                
                # Proportional and derivative control (optional)
                Kp = 0.005
                Kd = 0.01
                P = error
                D = error - self.prev_error
                angular_speed = -(Kp * P + Kd * D)
                
                # Update previous error
                self.prev_error = error
                
                # Set linear speed
                linear_speed = 0.5

                # Create and publish Twist message
                twist = Twist()
                twist.linear.x = linear_speed
                twist.angular.z = angular_speed
                self.cmd_vel_publisher.publish(twist)
        else:
            # If no line is detected, stop the robot
            twist = Twist()
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.cmd_vel_publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = LineFollower()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
