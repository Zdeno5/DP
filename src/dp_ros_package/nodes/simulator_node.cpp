#include "ros/ros.h"
#include "std_msgs/Float32MultiArray.h"
#include <random>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "simulator");

  ros::NodeHandle n("~");
  ros::Publisher wheel_pub = n.advertise<std_msgs::Float32MultiArray>("wheel_speeds", 1000);
  ros::Rate loop_rate(10);

  while (ros::ok())
  {

    std_msgs::Float32MultiArray wheels;

    wheels.data.push_back((rand() / static_cast<float>(RAND_MAX))*5);
    wheels.data.push_back((rand() / static_cast<float>(RAND_MAX))*5);
    wheels.data.push_back((rand() / static_cast<float>(RAND_MAX))*5);
    wheels.data.push_back((rand() / static_cast<float>(RAND_MAX))*5);

    wheel_pub.publish(wheels);

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}

