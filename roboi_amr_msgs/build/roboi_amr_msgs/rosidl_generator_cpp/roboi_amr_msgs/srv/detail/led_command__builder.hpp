// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__BUILDER_HPP_
#define ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/srv/detail/led_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace srv
{

namespace builder
{

class Init_LedCommand_Request_command_rr3
{
public:
  explicit Init_LedCommand_Request_command_rr3(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::srv::LedCommand_Request command_rr3(::roboi_amr_msgs::srv::LedCommand_Request::_command_rr3_type arg)
  {
    msg_.command_rr3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_rr2
{
public:
  explicit Init_LedCommand_Request_command_rr2(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedCommand_Request_command_rr3 command_rr2(::roboi_amr_msgs::srv::LedCommand_Request::_command_rr2_type arg)
  {
    msg_.command_rr2 = std::move(arg);
    return Init_LedCommand_Request_command_rr3(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_rr1
{
public:
  explicit Init_LedCommand_Request_command_rr1(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedCommand_Request_command_rr2 command_rr1(::roboi_amr_msgs::srv::LedCommand_Request::_command_rr1_type arg)
  {
    msg_.command_rr1 = std::move(arg);
    return Init_LedCommand_Request_command_rr2(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_rl3
{
public:
  explicit Init_LedCommand_Request_command_rl3(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedCommand_Request_command_rr1 command_rl3(::roboi_amr_msgs::srv::LedCommand_Request::_command_rl3_type arg)
  {
    msg_.command_rl3 = std::move(arg);
    return Init_LedCommand_Request_command_rr1(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_rl2
{
public:
  explicit Init_LedCommand_Request_command_rl2(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedCommand_Request_command_rl3 command_rl2(::roboi_amr_msgs::srv::LedCommand_Request::_command_rl2_type arg)
  {
    msg_.command_rl2 = std::move(arg);
    return Init_LedCommand_Request_command_rl3(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_rl1
{
public:
  explicit Init_LedCommand_Request_command_rl1(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedCommand_Request_command_rl2 command_rl1(::roboi_amr_msgs::srv::LedCommand_Request::_command_rl1_type arg)
  {
    msg_.command_rl1 = std::move(arg);
    return Init_LedCommand_Request_command_rl2(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_fr
{
public:
  explicit Init_LedCommand_Request_command_fr(::roboi_amr_msgs::srv::LedCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedCommand_Request_command_rl1 command_fr(::roboi_amr_msgs::srv::LedCommand_Request::_command_fr_type arg)
  {
    msg_.command_fr = std::move(arg);
    return Init_LedCommand_Request_command_rl1(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

class Init_LedCommand_Request_command_fl
{
public:
  Init_LedCommand_Request_command_fl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedCommand_Request_command_fr command_fl(::roboi_amr_msgs::srv::LedCommand_Request::_command_fl_type arg)
  {
    msg_.command_fl = std::move(arg);
    return Init_LedCommand_Request_command_fr(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::srv::LedCommand_Request>()
{
  return roboi_amr_msgs::srv::builder::Init_LedCommand_Request_command_fl();
}

}  // namespace roboi_amr_msgs


namespace roboi_amr_msgs
{

namespace srv
{

namespace builder
{

class Init_LedCommand_Response_message
{
public:
  explicit Init_LedCommand_Response_message(::roboi_amr_msgs::srv::LedCommand_Response & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::srv::LedCommand_Response message(::roboi_amr_msgs::srv::LedCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Response msg_;
};

class Init_LedCommand_Response_success
{
public:
  Init_LedCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedCommand_Response_message success(::roboi_amr_msgs::srv::LedCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LedCommand_Response_message(msg_);
  }

private:
  ::roboi_amr_msgs::srv::LedCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::srv::LedCommand_Response>()
{
  return roboi_amr_msgs::srv::builder::Init_LedCommand_Response_success();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__BUILDER_HPP_
