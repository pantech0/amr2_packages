#include "roboi/roboi_driver.hpp"
#include <exception>

roboi_driver::roboi_driver(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group)
{
    node_ = node;

  zltech_bus_ = std::make_shared<ZltechCanBus>("can0");
  zltech_fl_ = std::make_shared<ZltechCanDriver>(4, 4096);
  zltech_fr_ = std::make_shared<ZltechCanDriver>(5, 4096);
  zltech_rl_ = std::make_shared<ZltechCanDriver>(6, 4096);
  zltech_rr_ = std::make_shared<ZltechCanDriver>(7, 4096);

  zltech_fl_->add_to_bus(zltech_bus_);
  zltech_fr_->add_to_bus(zltech_bus_);
  zltech_rl_->add_to_bus(zltech_bus_);
  zltech_rr_->add_to_bus(zltech_bus_);

  if(!zltech_bus_->open_bus())
  {
    RCLCPP_ERROR(node_->get_logger(), "cannot open zl can bus");
    return;
  }

  zltech_bus_->nmt_operate_all();

  if(!zltech_fl_->enable_driver_control())
  {
    RCLCPP_ERROR(node_->get_logger(), "cannot enable wheel fl");
    return;
  }

  if(!zltech_fr_->enable_driver_control())
  {
    RCLCPP_ERROR(node_->get_logger(), "cannot enable wheel fr");
    return;
  }

  if(!zltech_rl_->enable_driver_control())
  {
    RCLCPP_ERROR(node_->get_logger(), "cannot enable wheel ml");
    return;
  }

  if(!zltech_rr_->enable_driver_control())
  {
    RCLCPP_ERROR(node_->get_logger(), "cannot enable wheel ml");
    return;
  }

  int64_t control_period_ms = 10; //~100ms



  start_time_ = node_->now();

  joint_state_pub_ = node_->create_publisher<sensor_msgs::msg::JointState>("/joint_states", 5);
  steering_sub_ = node_->create_subscription<std_msgs::msg::Float64MultiArray>("steering_controller/commands", 5, std::bind(&roboi_driver::steering_sub_clbk, this, std::placeholders::_1));
  wheel_sub_ = node_->create_subscription<std_msgs::msg::Float64MultiArray>("wheel_controller/commands", 5, std::bind(&roboi_driver::wheel_sub_clbk, this, std::placeholders::_1));
  cmd_timer_ = node_->create_wall_timer(std::chrono::milliseconds(control_period_ms), std::bind(&roboi_driver::cmd_timer_clbk, this));
  read_timer_ = node_->create_wall_timer(std::chrono::milliseconds(20), std::bind(&roboi_driver::read_timer_clbk, this));
}

roboi_driver::~roboi_driver()
{
  std::cout << "fl shutdown: " << ((zltech_fl_->send_shutdown()) ? "True" : "False") << std::endl;
  std::cout << "fr shutdown: " << ((zltech_fr_->send_shutdown()) ? "True" : "False") << std::endl;
  std::cout << "ml shutdown: " << ((zltech_rl_->send_shutdown()) ? "True" : "False") << std::endl;
  std::cout << "mr shutdown: " << ((zltech_rr_->send_shutdown()) ? "True" : "False") << std::endl;

  std::cout << "nmt stop: " << ((zltech_bus_->nmt_stop_all()) ? "True" : "False") << std::endl;
}

void roboi_driver::cmd_timer_clbk()
{
  //epos4_bus_->send_sync();
}


void roboi_driver::steering_sub_clbk(const std_msgs::msg::Float64MultiArray::SharedPtr msg)
{
//   epos4_fl_->send_pos_pdo(msg->data[0]);
//   epos4_fr_->send_pos_pdo(msg->data[1]);
//   epos4_ml_->send_pos_pdo(msg->data[2]);
//   epos4_mr_->send_pos_pdo(msg->data[3]);
//   epos4_rl_->send_pos_pdo(msg->data[4]);
//   epos4_rr_->send_pos_pdo(msg->data[5]);
}

void roboi_driver::wheel_sub_clbk(const std_msgs::msg::Float64MultiArray::SharedPtr msg)
{
        // driver_data.data[0] = packet->motor.command;
        // driver_data.data[1] = packet->motor.motorno;
        // driver_data.data[2] = packet->motor.data;
        // driver_data.data[3] = packet->motor.position;
        // driver_data.data[4] = packet->motor.velocity;

  _Float64 velo = (_Float64)msg->data[4];
  uint16_t isbreak = (uint16_t)msg->data[2];

  RCLCPP_INFO(node_->get_logger(), "Driver_Move : %d, velo : %f", (int)msg->data[1], velo );

  if( (int)msg->data[1] == Front_Left)
  {
    if( isbreak == 0 ) zltech_fl_->send_vel(velo*-1);
    zltech_fl_->send_break(isbreak);
  }
  else if( (int)msg->data[1] == Front_Right)
  {
    if( isbreak == 0 ) zltech_fr_->send_vel(velo);
    zltech_fr_->send_break(isbreak);
  }
  else if( (int)msg->data[1] == Rear_Left)
  {
    if( isbreak == 0 ) zltech_rl_->send_vel(velo*-1);
    zltech_rl_->send_break(isbreak);
  }
  else if( (int)msg->data[1] == Rear_Right)
  {
    if( isbreak == 0 ) zltech_rr_->send_vel(velo);
    zltech_rr_->send_break(isbreak);
  }
  else if( (int)msg->data[1] == Front)
  {
    if( isbreak == 0 ) zltech_fl_->send_vel(velo*-1);
    zltech_fl_->send_break(isbreak);

    if( isbreak == 0 ) zltech_fr_->send_vel(velo);
    zltech_fr_->send_break(isbreak);
  }
  else if( (int)msg->data[1] == Rear)
  {
    if( isbreak == 0 ) zltech_rl_->send_vel(velo*-1);
    zltech_rl_->send_break(isbreak);

    if( isbreak == 0 ) zltech_rr_->send_vel(velo);
    zltech_rr_->send_break(isbreak);
  }
  else if( (int)msg->data[1] == All)
  {
    if( isbreak == 0 ) zltech_fl_->send_vel(velo*-1);
    zltech_fl_->send_break(isbreak);

    if( isbreak == 0 ) zltech_fr_->send_vel(velo);
    zltech_fr_->send_break(isbreak);

    if( isbreak == 0 ) zltech_rl_->send_vel(velo*-1);
    zltech_rl_->send_break(isbreak);

    if( isbreak == 0 ) zltech_rr_->send_vel(velo);
    zltech_rr_->send_break(isbreak);
  }

}

void roboi_driver::read_timer_clbk()
{
  double wheel_pos_fl, wheel_pos_fr, wheel_pos_rl, wheel_pos_rr;
  uint16_t wheel_err_fl, wheel_err_fr, wheel_err_rl, wheel_err_rr;

  zltech_fl_->get_pose(wheel_pos_fl, wheel_err_fl);
  zltech_fr_->get_pose(wheel_pos_fr, wheel_err_fr);
  zltech_rl_->get_pose(wheel_pos_rl, wheel_err_rl);
  zltech_rr_->get_pose(wheel_pos_rr, wheel_err_rr);

  double steering_pos_fl, steering_pos_fr, steering_pos_ml, steering_pos_mr, steering_pos_rl, steering_pos_rr;
  int32_t steering_current_fl, steering_current_fr, steering_current_ml, steering_current_mr, steering_current_rl, steering_current_rr;

  // RCLCPP_INFO(get_logger(), "fl pos: %lf", steering_pos_fl);
  // RCLCPP_INFO(get_logger(), "fl pos: %lf", steering_pos_fr);
  // RCLCPP_INFO(get_logger(), "fl pos: %lf", steering_pos_ml);
  // RCLCPP_INFO(get_logger(), "fl pos: %lf", steering_pos_mr);
  // RCLCPP_INFO(get_logger(), "fl pos: %lf", steering_pos_rl);
  // RCLCPP_INFO(get_logger(), "fl pos: %lf", steering_pos_rr);
  // RCLCPP_INFO(get_logger(), "fl current: %d", steering_current_fl);
  // RCLCPP_INFO(get_logger(), "fl current: %d", steering_current_fr);
  // RCLCPP_INFO(get_logger(), "fl current: %d", steering_current_ml);
  // RCLCPP_INFO(get_logger(), "fl current: %d", steering_current_mr);
  // RCLCPP_INFO(get_logger(), "fl current: %d", steering_current_rl);
  // RCLCPP_INFO(get_logger(), "fl current: %d", steering_current_rr);
  sensor_msgs::msg::JointState msg;
  msg.header.frame_id = "";
  msg.header.stamp = node_->now();
  msg.name.resize(4);
  msg.position.resize(4);
  msg.velocity.resize(4);
  msg.effort.resize(4);

  msg.name[0] = "fl_wheel_joint";
  msg.name[1] = "fr_wheel_joint";
  msg.name[2] = "rl_wheel_joint";
  msg.name[3] = "rr_wheel_joint";;

  msg.position[0] = wheel_pos_fl;
  msg.position[1] = wheel_pos_fr;
  msg.position[2] = wheel_pos_rl;
  msg.position[3] = wheel_pos_rr;

  //LCPP_INFO(node_->get_logger(), "fl: %lf", wheel_pos_fl);
  // RCLCPP_INFO(node_->get_logger(), "fr: %lf", wheel_pos_fr);
  // RCLCPP_INFO(get_logger(), "ml: %lf", wheel_pos_ml);
  // RCLCPP_INFO(get_logger(), "mr: %lf", wheel_pos_mr);
  // RCLCPP_INFO(get_logger(), "rl: %lf", wheel_pos_rl);
  // RCLCPP_INFO(get_logger(), "rr: %lf", wheel_pos_rr);
  // RCLCPP_INFO(get_logger(), "---------------------");
  // RCLCPP_INFO(get_logger(), "err_fl: %d", wheel_err_fl);
  // RCLCPP_INFO(get_logger(), "err_fr: %d", wheel_err_fr);
  // RCLCPP_INFO(get_logger(), "err_ml: %d", wheel_err_ml);
  // RCLCPP_INFO(get_logger(), "err_mr: %d", wheel_err_mr);
  // RCLCPP_INFO(get_logger(), "err_rl: %d", wheel_err_rl);
  // RCLCPP_INFO(get_logger(), "err_rr: %d", wheel_err_rr);
  // RCLCPP_INFO(get_logger(), "=====================");

  joint_state_pub_->publish(msg);
}

