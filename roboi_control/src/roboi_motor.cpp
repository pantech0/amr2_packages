#include "roboi/roboi_motor.hpp"

roboi_motor::roboi_motor(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group)
{
  node_ = node;
  node_->declare_parameter("frontleft_ip", "192.168.0.10");
  node_->declare_parameter("frontright_ip", "192.168.0.11");
  node_->declare_parameter("rearleft_ip", "192.168.0.12");
  node_->declare_parameter("rearright_ip", "192.168.0.13");

  node_->declare_parameter("steering_fl_offset", -0.0974);
  node_->declare_parameter("steering_fr_offset", -0.0345);
  node_->declare_parameter("steering_rl_offset", 0.3950);
  node_->declare_parameter("steering_rr_offset", 0.2581);

  node_->declare_parameter("motor_state_rate", 10.0);

  std::string ip_fl = node_->get_parameter("frontleft_ip").get_value<std::string>();
  std::string ip_fr = node_->get_parameter("frontright_ip").get_value<std::string>();
  std::string ip_rl = node_->get_parameter("rearleft_ip").get_value<std::string>();
  std::string ip_rr = node_->get_parameter("rearright_ip").get_value<std::string>();

  double data_rate = node_->get_parameter("motor_state_rate").get_value<double>();


  RCLCPP_INFO(node_->get_logger(), "Fastech Driver Initiated");
  // Construct Motor Driver
  steering_fl_ = std::make_shared<ezi_driver>(ip_fl, steering_id::Front_Left);
  steering_fr_ = std::make_shared<ezi_driver>(ip_fr, steering_id::Front_Right);
  steering_rl_ = std::make_shared<ezi_driver>(ip_rl, steering_id::Rear_Left);
  steering_rr_ = std::make_shared<ezi_driver>(ip_rr, steering_id::Rear_Right);

  if( !steering_fl_->init() )
    RCLCPP_ERROR(node_->get_logger(), "Fastech Driver fail : frontleft_ip - [%s] ", ip_fl.c_str());

  if( !steering_fr_->init() )
    RCLCPP_ERROR(node_->get_logger(), "Fastech Driver fail : frontright_ip - [%s] ", ip_fr.c_str());

  if( !steering_rl_->init() )
    RCLCPP_ERROR(node_->get_logger(), "Fastech Driver fail : rearleft_ip - [%s] ", ip_rl.c_str());

  if( !steering_rr_->init() )
    RCLCPP_ERROR(node_->get_logger(), "Fastech Driver fail : rearright_ip - [%s] ", ip_rr.c_str());

  if( !steering_fl_->bSuccess || !steering_fr_->bSuccess || !steering_rl_->bSuccess || !steering_rr_->bSuccess)
  {
    RCLCPP_ERROR(node_->get_logger(), "Failed to initialize steering");
    //throw std::invalid_argument("Failed to initialize steering");
  }

  RCLCPP_INFO(node_->get_logger(), "Fastech Driver initialize Complete");

  // Timer, Subscriber, Publisher
  timer_ = node_->create_wall_timer(std::chrono::milliseconds(static_cast<int64_t>(1000.0/data_rate)), std::bind(&roboi_motor::timer_callback, this), callback_group);

  rclcpp::SubscriptionOptions options;
  options.callback_group = callback_group;

  auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
  pos_command_sub_ = node_->create_subscription<std_msgs::msg::Float64MultiArray>("/position_controller/commands", qos_profile,
                                    std::bind(&roboi_motor::pos_command_callback, this, std::placeholders::_1), options);

  upd_command_pub_ = node_->create_publisher<roboi_amr_msgs::msg::Udpsend>("/udp/commands", qos_profile);

}

roboi_motor::~roboi_motor()
{

}

void roboi_motor::timer_callback()
{
  rclcpp::Time stamp = node_->now();
  roboi_amr_msgs::msg::Udpsend motor_udp;

  auto fut_fl = std::async([this]() {
    return (steering_fl_->Get_Status());
  });

  auto fut_fr = std::async([this]() {
    return (steering_fr_->Get_Status());
  });

  auto fut_rl = std::async([this]() {
    return (steering_rl_->Get_Status());
  });

  auto fut_rr = std::async([this]() {
    return (steering_rr_->Get_Status());
  });

  memcpy(&motor_udp.st_fl, &steering_fl_->Status, sizeof(roboi_amr_msgs::msg::Udpsend));

  upd_command_pub_->publish(motor_udp);
}

void roboi_motor::pos_command_callback(const std_msgs::msg::Float64MultiArray::SharedPtr pos_command_msg)
{
}
