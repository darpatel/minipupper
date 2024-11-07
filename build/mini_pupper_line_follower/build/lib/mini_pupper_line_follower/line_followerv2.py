import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
import cv2
from cv_bridge import CvBridge

class LineFollower(Node):
    def __init__(self):
        super().__init__('line_follower_node')
        
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

    def image_callback(self, msg):
        # Convert the ROS Image message to a format OpenCV can use
        cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        # Convert the image to grayscale
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        
        # Threshold the image to isolate black areas (which we assume is the line)
        _, binary = cv2.threshold(gray, 70, 255, cv2.THRESH_BINARY_INV)
        
        # Find the center of the black line (assuming it's the largest contour)
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
                
                # Proportional control
                linear_speed = 0.15
                angular_speed = -float(error) / 100.00
                
                # Create Twist message and publish
                twist = Twist()
                twist.linear.x = linear_speed
                twist.angular.z = angular_speed
                self.cmd_vel_publisher.publish(twist)
        else:
            # Stop the robot if no line is detected
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