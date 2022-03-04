#include <QApplication>
#include "main_window.h"


int main(int argc, char *argv[])
{

  ros::init(argc, argv, "ros_node",ros::init_options::AnonymousName);
  QApplication a(argc, argv);

  MainWindow w;
  w.setWindowTitle("ROS - GUI");
  w.show();
  return a.exec();
}
