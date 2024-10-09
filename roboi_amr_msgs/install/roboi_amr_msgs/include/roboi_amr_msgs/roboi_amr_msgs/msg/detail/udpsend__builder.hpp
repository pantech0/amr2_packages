// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/Udpsend.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__UDPSEND__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__UDPSEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/udpsend__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_Udpsend_st_rr
{
public:
  explicit Init_Udpsend_st_rr(::roboi_amr_msgs::msg::Udpsend & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::Udpsend st_rr(::roboi_amr_msgs::msg::Udpsend::_st_rr_type arg)
  {
    msg_.st_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpsend msg_;
};

class Init_Udpsend_st_rl
{
public:
  explicit Init_Udpsend_st_rl(::roboi_amr_msgs::msg::Udpsend & msg)
  : msg_(msg)
  {}
  Init_Udpsend_st_rr st_rl(::roboi_amr_msgs::msg::Udpsend::_st_rl_type arg)
  {
    msg_.st_rl = std::move(arg);
    return Init_Udpsend_st_rr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpsend msg_;
};

class Init_Udpsend_st_fr
{
public:
  explicit Init_Udpsend_st_fr(::roboi_amr_msgs::msg::Udpsend & msg)
  : msg_(msg)
  {}
  Init_Udpsend_st_rl st_fr(::roboi_amr_msgs::msg::Udpsend::_st_fr_type arg)
  {
    msg_.st_fr = std::move(arg);
    return Init_Udpsend_st_rl(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpsend msg_;
};

class Init_Udpsend_st_fl
{
public:
  explicit Init_Udpsend_st_fl(::roboi_amr_msgs::msg::Udpsend & msg)
  : msg_(msg)
  {}
  Init_Udpsend_st_fr st_fl(::roboi_amr_msgs::msg::Udpsend::_st_fl_type arg)
  {
    msg_.st_fl = std::move(arg);
    return Init_Udpsend_st_fr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpsend msg_;
};

class Init_Udpsend_isindicator
{
public:
  explicit Init_Udpsend_isindicator(::roboi_amr_msgs::msg::Udpsend & msg)
  : msg_(msg)
  {}
  Init_Udpsend_st_fl isindicator(::roboi_amr_msgs::msg::Udpsend::_isindicator_type arg)
  {
    msg_.isindicator = std::move(arg);
    return Init_Udpsend_st_fl(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpsend msg_;
};

class Init_Udpsend_count
{
public:
  Init_Udpsend_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Udpsend_isindicator count(::roboi_amr_msgs::msg::Udpsend::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Udpsend_isindicator(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpsend msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::Udpsend>()
{
  return roboi_amr_msgs::msg::builder::Init_Udpsend_count();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__UDPSEND__BUILDER_HPP_
