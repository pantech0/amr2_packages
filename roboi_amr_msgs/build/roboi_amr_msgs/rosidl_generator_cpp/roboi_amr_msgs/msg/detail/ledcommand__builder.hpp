// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/ledcommand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_Ledcommand_blinkrate
{
public:
  explicit Init_Ledcommand_blinkrate(::roboi_amr_msgs::msg::Ledcommand & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::Ledcommand blinkrate(::roboi_amr_msgs::msg::Ledcommand::_blinkrate_type arg)
  {
    msg_.blinkrate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ledcommand msg_;
};

class Init_Ledcommand_action
{
public:
  explicit Init_Ledcommand_action(::roboi_amr_msgs::msg::Ledcommand & msg)
  : msg_(msg)
  {}
  Init_Ledcommand_blinkrate action(::roboi_amr_msgs::msg::Ledcommand::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Ledcommand_blinkrate(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ledcommand msg_;
};

class Init_Ledcommand_target
{
public:
  Init_Ledcommand_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ledcommand_action target(::roboi_amr_msgs::msg::Ledcommand::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Ledcommand_action(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ledcommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::Ledcommand>()
{
  return roboi_amr_msgs::msg::builder::Init_Ledcommand_target();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__BUILDER_HPP_
