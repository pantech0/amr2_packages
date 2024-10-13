#ifndef ROBOI_AMR_HPP_
#define ROBOI_AMR_HPP_

#include <rclcpp/rclcpp.hpp>
#include "roboi/roboi_udp.hpp"
#include "roboi/roboi_indicator.hpp"
#include "roboi/roboi_motor.hpp"
#include "roboi/roboi_driver.hpp"
#include "roboi/roboi_joy.hpp"

class RoboiAmr : public rclcpp::Node
{
public:
  explicit RoboiAmr(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());
  virtual ~RoboiAmr();

private:
  std::shared_ptr<roboi_udp> roboi_udp_;
  std::shared_ptr<roboi_indicator> roboi_indicator_;
  std::shared_ptr<roboi_motor> roboi_motor_;
  std::shared_ptr<roboi_driver> roboi_driver_;
  std::shared_ptr<roboi_joy> roboi_joy_;

  rclcpp::CallbackGroup::SharedPtr roboi_udp_callback_group_;
  rclcpp::CallbackGroup::SharedPtr roboi_indicator_callback_group_;
  rclcpp::CallbackGroup::SharedPtr roboi_motor_callback_group_;
  rclcpp::CallbackGroup::SharedPtr roboi_driver_callback_group_;
  rclcpp::CallbackGroup::SharedPtr roboi_joy_callback_group_;
};

#endif
