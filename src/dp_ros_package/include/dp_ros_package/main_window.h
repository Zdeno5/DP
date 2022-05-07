#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

//#include <QPixmap>
//#include <QPalette>
#include <QWidget>
#include <qtimer.h>
//#include <limits.h>

#include <ros/ros.h>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool_manager.h>
#include <rviz/tool.h>

#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float32MultiArray.h>
#include <geometry_msgs/Twist.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  //Callback functions
  void tempCallback(const std_msgs::Float64 msg);
  void wheel_speedCallback(const std_msgs::Float32MultiArray msg);

public slots:
  void spinOnce();

private slots:
  void on_checkBox_stateChanged(int arg1);

  void on_verticalSliderZeroBtn_clicked();

  void on_horizontalZslider_clicked();

  void on_verticalSlider_valueChanged(int value);

  void on_horizontalSlider_valueChanged(int value);

  void on_verticalSliderUpBtn_clicked();

  void on_verticalSliderDownBtn_clicked();

  void on_horizontalLslider_clicked();

  void on_horizontalRslider_clicked();

  void on_pushButton_clicked();

  void on_setGoalButton_clicked();

private:
  Ui::MainWindow *ui;

  //timer for new message check
  QTimer *ros_timer;

  //ros node handler
  ros::NodeHandlePtr NodeHadler;

  //ros subscribers
  ros::Subscriber temp_sub;
  ros::Subscriber wheel_speed_sub;

  //ros publishers
  ros::Publisher controll_pub;
  ros::Publisher mode_pub;

  //rviz
  rviz::VisualizationManager* rviz_manager;
  rviz::RenderPanel* rviz_render;
  rviz::VisualizationManager* camera_manager;
  rviz::RenderPanel* camera_render;
  rviz::ToolManager* rviz_tool_manager;

  //rviz displays
  rviz::Display* scan_display;
  rviz::Display* local_costmap_display;
  rviz::Display* global_costmap_display;
  rviz::Display* plan_display;
  rviz::Display* map_display;
  rviz::Display* pose_display;
  rviz::Display* goal_display;
  rviz::Display* camera_display;
};

#endif // MAIN_WINDOW_H
