// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/Udpmsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/udpmsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_Udpmsg_st_rr
{
public:
  explicit Init_Udpmsg_st_rr(::roboi_amr_msgs::msg::Udpmsg & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::Udpmsg st_rr(::roboi_amr_msgs::msg::Udpmsg::_st_rr_type arg)
  {
    msg_.st_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpmsg msg_;
};

class Init_Udpmsg_st_rl
{
public:
  explicit Init_Udpmsg_st_rl(::roboi_amr_msgs::msg::Udpmsg & msg)
  : msg_(msg)
  {}
  Init_Udpmsg_st_rr st_rl(::roboi_amr_msgs::msg::Udpmsg::_st_rl_type arg)
  {
    msg_.st_rl = std::move(arg);
    return Init_Udpmsg_st_rr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpmsg msg_;
};

class Init_Udpmsg_st_fr
{
public:
  explicit Init_Udpmsg_st_fr(::roboi_amr_msgs::msg::Udpmsg & msg)
  : msg_(msg)
  {}
  Init_Udpmsg_st_rl st_fr(::roboi_amr_msgs::msg::Udpmsg::_st_fr_type arg)
  {
    msg_.st_fr = std::move(arg);
    return Init_Udpmsg_st_rl(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpmsg msg_;
};

class Init_Udpmsg_st_fl
{
public:
  explicit Init_Udpmsg_st_fl(::roboi_amr_msgs::msg::Udpmsg & msg)
  : msg_(msg)
  {}
  Init_Udpmsg_st_fr st_fl(::roboi_amr_msgs::msg::Udpmsg::_st_fl_type arg)
  {
    msg_.st_fl = std::move(arg);
    return Init_Udpmsg_st_fr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpmsg msg_;
};

class Init_Udpmsg_count
{
public:
  Init_Udpmsg_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Udpmsg_st_fl count(::roboi_amr_msgs::msg::Udpmsg::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Udpmsg_st_fl(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Udpmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::Udpmsg>()
{
  return roboi_amr_msgs::msg::builder::Init_Udpmsg_count();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__BUILDER_HPP_
