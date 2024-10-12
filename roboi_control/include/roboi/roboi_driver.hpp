#ifndef __ROBOI_DRIVER_NODE__
#define __ROBOI_DRIVER_NODE__

#include <rclcpp/rclcpp.hpp>
#include "roboi/zltech_can.hpp"
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>

class roboi_driver {
public:
explicit roboi_driver(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group = nullptr);
virtual ~roboi_driver();

private:

typedef enum{
  Front_Left = 1,
  Front_Right,
  Rear_Left,
  Rear_Right,
  Front,
  Rear,
  All,
}steering_id;


rclcpp::Node* node_;

std::shared_ptr<ZltechCanBus> zltech_bus_;
std::shared_ptr<ZltechCanDriver> zltech_fl_;
std::shared_ptr<ZltechCanDriver> zltech_fr_;
std::shared_ptr<ZltechCanDriver> zltech_rl_;
std::shared_ptr<ZltechCanDriver> zltech_rr_;

rclcpp::TimerBase::SharedPtr cmd_timer_, read_timer_;
rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_;
rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr steering_sub_;
rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr wheel_sub_;

void cmd_timer_clbk();
void read_timer_clbk();

void steering_sub_clbk(const std_msgs::msg::Float64MultiArray::SharedPtr msg);
void wheel_sub_clbk(const std_msgs::msg::Float64MultiArray::SharedPtr msg);

rclcpp::Time start_time_;
};


#endif  //__ROBOI_DRIVER_NODE__
