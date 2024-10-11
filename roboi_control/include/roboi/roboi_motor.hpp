#ifndef ROBOI_MOTOR_HPP_
#define ROBOI_MOTOR_HPP_

#include <rclcpp/rclcpp.hpp>
#include "roboi/ezi_server_plus.hpp"
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include "steering_control/FAS_EziMOTIONPlusE.h"
#include "roboi_amr_msgs/msg/udpmsg.hpp"
#include "roboi_amr_msgs/msg/angle_status.hpp"


class roboi_motor
{
public:
  explicit roboi_motor(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group = nullptr);
  virtual ~roboi_motor();

typedef enum{
  Front_Left = 1,
  Front_Right,
  Rear_Left,
  Rear_Right,
  Front,
  Rear,
  All,
}steering_id;

typedef enum 
{
    ST_ServoOn = 10,
    ST_PositionCelar,
    ST_AlarmReset,
    ST_HomePosition,
    ST_Move,
    ST_Stop
}AMR_Cmd_def;

  rclcpp::Node* node_;

  std::shared_ptr<ezi_driver> steering_fl_;
  std::shared_ptr<ezi_driver> steering_fr_;
  std::shared_ptr<ezi_driver> steering_rl_;
  std::shared_ptr<ezi_driver> steering_rr_;

  roboi_amr_msgs::msg::Udpmsg udpmotor;

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr pos_command_sub_;
  rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr vel_command_sub_;
  rclcpp::Subscription<std_msgs::msg::Int32MultiArray>::SharedPtr mot_command_sub_;
  rclcpp::Publisher<roboi_amr_msgs::msg::Udpmsg>::SharedPtr upd_command_pub_;

  void timer_callback();
  void pos_command_callback(const std_msgs::msg::Float64MultiArray::SharedPtr pos_command_msg);
  void vel_command_callback(const std_msgs::msg::Float64MultiArray::SharedPtr vel_command_msg);
  void mot_command_callback(const std_msgs::msg::Int32MultiArray::SharedPtr mot_command_msg);
};

#endif
