#ifndef ROBOI_JOY_HPP_
#define ROBOI_JOY_HPP_

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <math.h>

class roboi_joy
{
public:
  explicit roboi_joy(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group = nullptr);
  virtual ~roboi_joy();

  typedef enum{
    Joystick_left_x = 0,
    Joystick_left_y,
    L2_analog,
    Joystick_right_x,
    Joystick_right_y,
    R2_analog,
    Up_btn,
    Down_btn,
    Left_btn,
    Right_btn,
  }aexs_def;

  typedef enum{
    a_btn = 0,
    b_btn,
    x_btn = 3,
    L1_btn = 6,
    R1_btn,
    L2_btn = 8,
    R2_btn,   
    select = 10,
    start 
  }button_def;

  rclcpp::Node* node_; 

  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_command_sub_;
  
  
  void timer_callback();
  void joy_command_callback(const sensor_msgs::msg::Joy::SharedPtr joy_command_msg);


};

#endif

