#include "main_window.h"
#include "ui_main_window.h"

MainWindow::MainWindow(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  setWindowIcon(QIcon(":/images/carbp.png"));

  QPixmap car(":/images/carbp.png");
  ui->car_img->setPixmap(car);

  // create node handler
  NodeHadler.reset(new ros::NodeHandle("~"));

  //setup timer
  ros_timer = new QTimer(this);
  connect(ros_timer, SIGNAL(timeout()), this, SLOT(spinOnce()));
  ros_timer->start(100);

  //temperature subsriber - Float64
  std::string temp_listen;
  NodeHadler->param<std::string>("temp_listen",temp_listen,"/imu/temperature");
  temp_sub = NodeHadler->subscribe<std_msgs::Float64>(temp_listen ,1 ,&MainWindow::tempCallback ,this );

  /*
  //wheel speed subsriber - Float32MultiArray
  std::string wheel_speed_listen;
  NodeHadler->param<std::string>("wheel_speed_listen",wheel_speed_listen,"/wheel_speed");
  //temp_sub = NodeHadler->subscribe<std_msgs::Float32MultiArray>(wheel_speed_listen ,1 ,&MainWindow::wheel_speedCallback ,this );
  */

  // required angular / linear speed - geometry_msgs/Twist
  std::string ang_lin_speed_listen;
  NodeHadler->param<std::string>("ang_lin_speed_listen",ang_lin_speed_listen,"/cmd_vel");
  ang_lin_speed_sub = NodeHadler->subscribe<geometry_msgs::Twist>(ang_lin_speed_listen ,1 ,&MainWindow::ang_lin_speedCallback ,this );

  //scan subscriber - sensor_msgs/LaserScan
  std::string scan_listen;
  NodeHadler->param<std::string>("scan_listen",scan_listen,"/scan");
  scan_sub = NodeHadler->subscribe<sensor_msgs::LaserScan>(scan_listen ,1 ,&MainWindow::scanCallback ,this );

  //local costmap subscriber - nav_msgs/OccupancyGrid
  std::string local_costmap_listen;
  NodeHadler->param<std::string>("local_costmap_listen",local_costmap_listen,"/move_base/local_costmap/costmap");
  local_costmap_sub = NodeHadler->subscribe<nav_msgs::OccupancyGrid>(local_costmap_listen ,1 ,&MainWindow::local_costmapCallback ,this );

  //global costmap subsrciber - nav_msgs/OccupancyGrid
  std::string global_costmap_listen;
  NodeHadler->param<std::string>("global_costmap_listen",global_costmap_listen,"/move_base/global_costmap/costmap");
  global_costmap_sub = NodeHadler->subscribe<nav_msgs::OccupancyGrid>(global_costmap_listen ,1 ,&MainWindow::global_costmapCallback ,this );

  //plan subscriber - nav_msgs/Path
  std::string plan_listen;
  NodeHadler->param<std::string>("plan_listen",plan_listen,"/move_base/NavfnROS/plan");
  plan_sub = NodeHadler->subscribe<nav_msgs::Path>(plan_listen ,1 ,&MainWindow::planCallback ,this );

  //map subsrciber - nav_msgs/OccupancyGrid
  std::string map_listen;
  NodeHadler->param<std::string>("map_listen",map_listen,"/map");
  map_sub = NodeHadler->subscribe<nav_msgs::OccupancyGrid>(map_listen ,1 ,&MainWindow::mapCallback ,this );

  //rviz ------------------------------------------------------------------------------------------------------
  //inititalize rviz
  rviz_render = new rviz::RenderPanel;
  rviz_manager = new rviz::VisualizationManager(rviz_render);
  rviz_render->initialize( rviz_manager->getSceneManager(), rviz_manager );
  rviz_manager ->initialize();

  //add rviz to ui
  ui->rviz_layout->addWidget(rviz_render);
  rviz_render->setStyleSheet("border: 3px solid white;");

  //clean the manager
  rviz_manager->removeAllDisplays();

  //add displays ////////////////////////////////////////////////////////////////////////
  map_display = rviz_manager->createDisplay( "rviz/Map", "adjustable map", true );
  map_display->subProp("Topic")->setValue("/map");
  map_display->subProp("Alpha")->setValue("0.8");

  scan_display = rviz_manager->createDisplay( "rviz/LaserScan", "adjustable scan", true );
  scan_display->subProp( "Topic" )->setValue( "/scan" );
  scan_display->subProp( "Style" )->setValue( "Flat Squares");
  scan_display->subProp( "Size (m)" )->setValue( "0.1");

  local_costmap_display = rviz_manager->createDisplay( "rviz/Map", "adjustable localcostmap", true );
  local_costmap_display->subProp( "Topic" )->setValue( "/move_base/local_costmap/costmap" );

  global_costmap_display = rviz_manager->createDisplay( "rviz/Map", "adjustable globalcostmap", true );
  global_costmap_display->subProp( "Topic" )->setValue( "/move_base/global_costmap/costmap" );

  plan_display = rviz_manager->createDisplay( "rviz/Path", "adjustable path", true );
  plan_display->subProp( "Topic" )->setValue( "/move_base/NavfnROS/plan" );

  pose_display = rviz_manager->createDisplay( "rviz/PoseWithCovariance", "adjustable posewithcovariance", true );
  pose_display->subProp( "Topic" )->setValue( "/amcl_pose" );

  goal_display = rviz_manager->createDisplay( "rviz/Pose", "adjustable pose", true );
  goal_display->subProp( "Topic" )->setValue( "/move_base/current_goal" );

  //start rviz
  rviz_manager->startUpdate();
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::spinOnce(){
  if(ros::ok()){
    ros::spinOnce();
  }
  else QApplication::quit();
}

//--------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------- Callback functions ---------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------

void MainWindow::tempCallback(const std_msgs::Float64 msg){
  auto temp = msg.data;
  ui->TemperatureLabel->setText(QString::number(temp,'f',2));

  if(temp <0){
    ui->TemperatureLabel->setStyleSheet("color: white;");
    ui->celsius->setStyleSheet("color: white;");
    return;
  }
  if(temp > 0 && temp <25){
    ui->TemperatureLabel->setStyleSheet("color: #3BF6F4;");
    ui->celsius->setStyleSheet("color: #3BF6F4;");
    return;
  }
  if(temp >= 25 && temp <30){
    ui->TemperatureLabel->setStyleSheet("color: #06B400;");
    ui->celsius->setStyleSheet("color: #06B400;");
    return;
  }
  if(temp >= 30 && temp <35){
    ui->TemperatureLabel->setStyleSheet("color: #E6FF0D;");
    ui->celsius->setStyleSheet("color: #E6FF0D;");
    return;
  }
  if(temp >= 35 && temp <40){
    ui->TemperatureLabel->setStyleSheet("color: #E68400;");
    ui->celsius->setStyleSheet("color: #E68400;");
    return;
  }
  if(temp >= 40){
    ui->TemperatureLabel->setStyleSheet("color: #E62900;");
    ui->celsius->setStyleSheet("color: #E62900;");
    return;
  }
}

/*
void MainWindow::wheel_speedCallback(const std_msgs::Float32MultiArray msg){
  auto wheel_msg = msg.data;
  ui->wheel1_label->setText(QString::number(wheel_msg.at(0)));
  ui->wheel2_label->setText(QString::number(wheel_msg.at(1)));
  ui->wheel3_label->setText(QString::number(wheel_msg.at(2)));
  ui->wheel4_label->setText(QString::number(wheel_msg.at(3)));
}
*/

void MainWindow::ang_lin_speedCallback(const geometry_msgs::Twist msg){
  auto l_x = msg.linear.x;
  auto l_y = msg.linear.y;
  auto l_z = msg.linear.z;
  auto a_x = msg.angular.x;
  auto a_y = msg.angular.y;
  auto a_z = msg.angular.z;

  ui->a_x->setText(QString::number(a_x,'f',3));
  ui->a_y->setText(QString::number(a_y,'f',3));
  ui->a_z->setText(QString::number(a_z,'f',3));
  ui->l_x->setText(QString::number(l_x,'f',3));
  ui->l_y->setText(QString::number(l_y,'f',3));
  ui->l_z->setText(QString::number(l_z,'f',3));
}

void MainWindow::scanCallback(const sensor_msgs::LaserScan msg){
  auto scan = msg;

}

void MainWindow::local_costmapCallback(const nav_msgs::OccupancyGrid msg){
  auto costmap = msg.data;
}

void MainWindow::global_costmapCallback(const nav_msgs::OccupancyGrid msg){
  auto costmap = msg.data;
}

void MainWindow::planCallback(const nav_msgs::Path msg){
  auto path = msg.poses;
}

void MainWindow::mapCallback(const nav_msgs::OccupancyGrid msg){
  auto map = msg.data;
}