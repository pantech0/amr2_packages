#ifndef ROBOI_MOTOR_HPP_
#define ROBOI_MOTOR_HPP_

#include <rclcpp/rclcpp.hpp>
#include "roboi/ezi_server_plus.hpp"
#include <std_msgs/msg/float64_multi_array.hpp>
#include "roboi_amr_msgs/msg/ststatus.hpp"
#include "roboi_amr_msgs/msg/udpsend.hpp"

class roboi_motor
{
public:
  explicit roboi_motor(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group = nullptr);
  virtual ~roboi_motor();

typedef enum{
  Front_Left = 1,
  Front_Right,
  Rear_Left,
  Rear_Right
}steering_id;

  rclcpp::Node* node_;

  std::shared_ptr<ezi_driver> steering_fl_;
  std::shared_ptr<ezi_driver> steering_fr_;
  std::shared_ptr<ezi_driver> steering_rl_;
  std::shared_ptr<ezi_driver> steering_rr_;



  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr pos_command_sub_;
  rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr vel_command_sub_;
  rclcpp::Publisher<roboi_amr_msgs::msg::Udpsend>::SharedPtr upd_command_pub_;

  void timer_callback();
  void pos_command_callback(const std_msgs::msg::Float64MultiArray::SharedPtr pos_command_msg);
  void vel_command_callback(const std_msgs::msg::Float64MultiArray::SharedPtr vel_command_msg);
};

#endif
