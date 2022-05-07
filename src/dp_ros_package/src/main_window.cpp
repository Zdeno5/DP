#include "main_window.h"
#include "ui_main_window.h"

MainWindow::MainWindow(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  // create node handler
  NodeHadler.reset(new ros::NodeHandle("~"));

  //setup timer
  ros_timer = new QTimer(this);
  connect(ros_timer, SIGNAL(timeout()), this, SLOT(spinOnce()));
  ros_timer->start(10000);

  //--------------------------------------- Subscribers ----------------------------------------------------------//
  //temperature subsriber - Float64
  std::string temp_listen;
  NodeHadler->param<std::string>("temp_listen",temp_listen,"/imu/temperature");
  temp_sub = NodeHadler->subscribe<std_msgs::Float64>(temp_listen ,1 ,&MainWindow::tempCallback ,this );

  //wheel speed subsriber - Float32MultiArray
  std::string wheel_speed_listen;
  NodeHadler->param<std::string>("wheel_speed_listen",wheel_speed_listen,"/simulator/wheel_speeds");
  wheel_speed_sub = NodeHadler->subscribe<std_msgs::Float32MultiArray>(wheel_speed_listen ,1 ,&MainWindow::wheel_speedCallback ,this );

  //---------------------------------------Publishers--------------------------------------------------------//
  std::string controll_publish;
  NodeHadler->param<std::string>("controll_publish",controll_publish,"/controll");
  controll_pub = NodeHadler->advertise<geometry_msgs::Twist>(controll_publish,1);

  std::string mode_publish;
  NodeHadler->param<std::string>("mode_publish",mode_publish,"/controll_mode");
  mode_pub = NodeHadler->advertise<std_msgs::Bool>(mode_publish,1);

  //rviz ------------------------------------------------------------------------------------------------------
  //inititalize rviz
  rviz_render = new rviz::RenderPanel;
  rviz_manager = new rviz::VisualizationManager(rviz_render);
  rviz_render->initialize( rviz_manager->getSceneManager(), rviz_manager );
  rviz_manager ->initialize();

  rviz_tool_manager = rviz_manager->getToolManager();

  camera_render = new rviz::RenderPanel;
  camera_manager = new rviz::VisualizationManager(camera_render);
  camera_render->initialize( camera_manager->getSceneManager(), camera_manager );
  camera_manager ->initialize();

  //add rviz to ui
  ui->rviz_layout->addWidget(rviz_render);
  ui->camera_layout->addWidget(camera_render);

  //clean the manager
  rviz_manager->removeAllDisplays();
  camera_manager->removeAllDisplays();

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

  pose_display = rviz_manager->createDisplay( "rviz/PoseWithCovariance", "adjustable pose", true );
  pose_display->subProp( "Topic" )->setValue( "/amcl_pose" );

  goal_display = rviz_manager->createDisplay( "rviz/Pose", "adjustable goal", true );
  goal_display->subProp( "Topic" )->setValue( "/move_base/current_goal" );

  //camera_display = camera_manager->createDisplay( "rviz/Image", "stream image", true );
  //camera_display->subProp( "Image Topic" )->setValue( "/camera/image" );
  //camera_display->subProp( "Transport Hint" )->setValue( "compressed" );
  //camera_display->subProp( "Queue Size" )->setValue( "2" );
  //camera_display->subProp( "Unreliable" )->setValue( "false" );

  //todo kiprobalni opencvvel rviz helyett

  //start rviz
  rviz_manager->startUpdate();
}

MainWindow::~MainWindow()
{
  delete ui;
}

// ROS spin + publish
void MainWindow::spinOnce(){
  std_msgs::Bool manual_mode;
  if(ui->checkBox->checkState()){
    manual_mode.data = true;
    mode_pub.publish(manual_mode);
    geometry_msgs::Twist twist;
    twist.linear.x = ui->verticalSlider->value();
    twist.linear.y = 0;
    twist.linear.z = 0;
    twist.angular.x = 0;
    twist.angular.y = 0;
    twist.angular.z = ui->horizontalSlider->value();
    controll_pub.publish(twist);
  }
  else{
    manual_mode.data = false;
    mode_pub.publish(manual_mode);
  }

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

  int min_temp = 10;
  int max_temp = 70;

  if(temp <= min_temp){
    ui->TemperatureLabel->setStyleSheet("color: white;");
    ui->celsius->setStyleSheet("color: white;");
    return;
  }
  if(temp <= (((max_temp-min_temp)*0.25)+min_temp) ){
    ui->TemperatureLabel->setStyleSheet("color: #3BF6F4;");
    ui->celsius->setStyleSheet("color: #3BF6F4;");
    return;
  }
  if(temp <= (((max_temp-min_temp)*0.5)+min_temp) ){
    ui->TemperatureLabel->setStyleSheet("color: #06B400;");
    ui->celsius->setStyleSheet("color: #06B400;");
    return;
  }
  if(temp <= (((max_temp-min_temp)*0.75)+min_temp) ){
    ui->TemperatureLabel->setStyleSheet("color: #E6FF0D;");
    ui->celsius->setStyleSheet("color: #E6FF0D;");
    return;
  }
  if(temp <= (((max_temp-min_temp)*0.9)+min_temp) ){
    ui->TemperatureLabel->setStyleSheet("color: #E68400;");
    ui->celsius->setStyleSheet("color: #E68400;");
    return;
  }
  if(temp < (((max_temp-min_temp)*0.9)+min_temp) ){
    ui->TemperatureLabel->setStyleSheet("color: #E62900;");
    ui->celsius->setStyleSheet("color: #E62900;");
    return;
  }
}

void MainWindow::wheel_speedCallback(const std_msgs::Float32MultiArray msg){
  auto wheel_msg = msg.data;
  ui->wheel1_label->setText(QString::number(wheel_msg.at(0),'f',2));
  ui->wheel2_label->setText(QString::number(wheel_msg.at(1),'f',2));
  ui->wheel3_label->setText(QString::number(wheel_msg.at(2),'f',2));
  ui->wheel4_label->setText(QString::number(wheel_msg.at(3),'f',2));
}

void MainWindow::on_checkBox_stateChanged(int state)
{
  if(state){
    ui->verticalSlider->setEnabled(1);
    ui->horizontalSlider->setEnabled(1);
    ui->verticalSliderUpBtn->setEnabled(1);
    ui->verticalSliderZeroBtn->setEnabled(1);
    ui->verticalSliderDownBtn->setEnabled(1);
    ui->horizontalLslider->setEnabled(1);
    ui->horizontalZslider->setEnabled(1);
    ui->horizontalRslider->setEnabled(1);
  }
  else{
    ui->verticalSlider->setEnabled(0);
    ui->horizontalSlider->setEnabled(0);
    ui->verticalSlider->setValue(0);
    ui->horizontalSlider->setValue(0);
    ui->verticalSliderUpBtn->setEnabled(0);
    ui->verticalSliderZeroBtn->setEnabled(0);
    ui->verticalSliderDownBtn->setEnabled(0);
    ui->horizontalLslider->setEnabled(0);
    ui->horizontalZslider->setEnabled(0);
    ui->horizontalRslider->setEnabled(0);
  }
}

void MainWindow::on_verticalSliderZeroBtn_clicked()
{
    ui->verticalSlider->setValue(0);
}

void MainWindow::on_horizontalZslider_clicked()
{
    ui->horizontalSlider->setValue(0);
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    ui->controll_speed->setText(QString::number(value) + " m/s");
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->controll_steer->setText(QString::number(value) + " rad/s");
}

void MainWindow::on_verticalSliderUpBtn_clicked()
{
  int curr = ui->verticalSlider->value();
  if(curr != ui->verticalSlider->maximum())
    ui->verticalSlider->setValue(curr+1);
}

void MainWindow::on_verticalSliderDownBtn_clicked()
{
  int curr = ui->verticalSlider->value();
  if(curr != ui->verticalSlider->minimum())
    ui->verticalSlider->setValue(curr-1);
}

void MainWindow::on_horizontalLslider_clicked()
{
  int curr = ui->horizontalSlider->value();
  if(curr != ui->horizontalSlider->minimum())
    ui->horizontalSlider->setValue(curr-1);
}

void MainWindow::on_horizontalRslider_clicked()
{
  int curr = ui->horizontalSlider->value();
  if(curr != ui->horizontalSlider->maximum())
    ui->horizontalSlider->setValue(curr+1);
}

void MainWindow::on_pushButton_clicked()
{
  QString master_uri;
  QString host;

  master_uri = ui->hostname_txt->text();
  host = ui->masteruri_txt->text();

  if(master_uri.isEmpty()){
    master_uri="http://localhost:11311";
  }
  if(host.isEmpty()){
    host="localhost";
  }

  std::map<std::string,std::string> remappings;
  remappings["__master"] = master_uri.toStdString();
  remappings["__hostname"] = host.toStdString();
  ros::init(remappings,"ros_node",ros::init_options::AnonymousName);
}

void MainWindow::on_setGoalButton_clicked()
{
  int goal_index = 0;
  QStringList sl = rviz_tool_manager->getToolClasses();
  for(int i=0 ; i < sl.length() ; i++){
     if(sl.at(i) == "rviz/SetGoal")
       goal_index = i;
  }
  rviz_tool_manager->setCurrentTool(rviz_tool_manager->getTool(goal_index));
}
