#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/Image.h>
#include <std_msgs/Header.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "video_publisher");
  ros::NodeHandle nh;
  image_transport::ImageTransport it(nh);
  image_transport::Publisher pub = it.advertise("camera/image", 1);
  cv::VideoCapture vid("/home/dp/DP_ws/src/dp_ros_package/resources/videos/camera.mp4");
  cv::Mat frame;
  if(!vid.isOpened()){
    std::cout << "Error opening video file" << std::endl;
    return 0;
  }

  ros::Rate loop_rate(5);
  while (nh.ok()) {
    vid >> frame;
    if (frame.empty()){
      std::cout << "End of video" << std::endl;
      return 0;
    }
    sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", frame).toImageMsg();
    pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
  }
}
