#ifndef ROBOI_INDICATOR_HPP_
#define ROBOI_INDICATOR_HPP_

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp>
#include "std_msgs/msg/string.hpp"
#include <fcntl.h>
#include <termios.h>
//#include <roboi_amr_msgs/srv/LedCommand.hpp>

class roboi_indicator
{
public:
  explicit roboi_indicator(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group = nullptr);
  virtual ~roboi_indicator();

private:
  typedef enum{
    Front_Left_Led = 1,
    Front_Right_Led,
    Front_Center_Led,
    Rear_Left_Led,
    Rear_Right_Led,
    Rear_Center_Led,
    Stop_Led,
    Move_Led,
    Wait_Led,
    Ararm_Led
  }cmd_led_t;

  typedef enum{
    RETURN_OK = 0xF0,
    RETURN_INVALID_COMMAND = 0xE1,
    RETURN_INVALID_DATA = 0xD2,
    RETURN_CHECKSUM_ERROR = 0xC3,
    RETURN_CONNTECTION_ERROR = 0xB4,
    RETURN_TIMEOUT = 0xA5,
    RETURN_UNKNOWN_ERROR = 0x96,
  }cmd_return_t;

  rclcpp::Node* node_;
//  using LedCmd = roboi_amr_msgs::srv::LedCommand;

  std::string port_;
  uint32_t baudrate_;
  int fd_;
  struct termios oldtio_;
  bool connection_;

  rclcpp::Subscription<std_msgs::msg::UInt16MultiArray>::SharedPtr led_command_sub_;

  void led_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr led_msg);

  void open_port();
  void close_port();
  cmd_return_t send_data(std_msgs::msg::UInt16MultiArray::SharedPtr led_msg);
};

#endif
