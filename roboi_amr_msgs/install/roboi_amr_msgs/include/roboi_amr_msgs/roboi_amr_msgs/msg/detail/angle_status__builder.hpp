// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/AngleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/angle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_AngleStatus_positemno
{
public:
  explicit Init_AngleStatus_positemno(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::AngleStatus positemno(::roboi_amr_msgs::msg::AngleStatus::_positemno_type arg)
  {
    msg_.positemno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_actvel
{
public:
  explicit Init_AngleStatus_actvel(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_positemno actvel(::roboi_amr_msgs::msg::AngleStatus::_actvel_type arg)
  {
    msg_.actvel = std::move(arg);
    return Init_AngleStatus_positemno(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_actposerr
{
public:
  explicit Init_AngleStatus_actposerr(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_actvel actposerr(::roboi_amr_msgs::msg::AngleStatus::_actposerr_type arg)
  {
    msg_.actposerr = std::move(arg);
    return Init_AngleStatus_actvel(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_actpos
{
public:
  explicit Init_AngleStatus_actpos(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_actposerr actpos(::roboi_amr_msgs::msg::AngleStatus::_actpos_type arg)
  {
    msg_.actpos = std::move(arg);
    return Init_AngleStatus_actposerr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_cmdpos
{
public:
  explicit Init_AngleStatus_cmdpos(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_actpos cmdpos(::roboi_amr_msgs::msg::AngleStatus::_cmdpos_type arg)
  {
    msg_.cmdpos = std::move(arg);
    return Init_AngleStatus_actpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbservoon
{
public:
  explicit Init_AngleStatus_isbservoon(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_cmdpos isbservoon(::roboi_amr_msgs::msg::AngleStatus::_isbservoon_type arg)
  {
    msg_.isbservoon = std::move(arg);
    return Init_AngleStatus_cmdpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbpositiontableend
{
public:
  explicit Init_AngleStatus_isbpositiontableend(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isbservoon isbpositiontableend(::roboi_amr_msgs::msg::AngleStatus::_isbpositiontableend_type arg)
  {
    msg_.isbpositiontableend = std::move(arg);
    return Init_AngleStatus_isbservoon(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isboverheat
{
public:
  explicit Init_AngleStatus_isboverheat(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isbpositiontableend isboverheat(::roboi_amr_msgs::msg::AngleStatus::_isboverheat_type arg)
  {
    msg_.isboverheat = std::move(arg);
    return Init_AngleStatus_isbpositiontableend(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbovercurrent
{
public:
  explicit Init_AngleStatus_isbovercurrent(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isboverheat isbovercurrent(::roboi_amr_msgs::msg::AngleStatus::_isbovercurrent_type arg)
  {
    msg_.isbovercurrent = std::move(arg);
    return Init_AngleStatus_isboverheat(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isboriginreturn
{
public:
  explicit Init_AngleStatus_isboriginreturn(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isbovercurrent isboriginreturn(::roboi_amr_msgs::msg::AngleStatus::_isboriginreturn_type arg)
  {
    msg_.isboriginreturn = std::move(arg);
    return Init_AngleStatus_isbovercurrent(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbmotionpause
{
public:
  explicit Init_AngleStatus_isbmotionpause(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isboriginreturn isbmotionpause(::roboi_amr_msgs::msg::AngleStatus::_isbmotionpause_type arg)
  {
    msg_.isbmotionpause = std::move(arg);
    return Init_AngleStatus_isboriginreturn(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbmotionmoving
{
public:
  explicit Init_AngleStatus_isbmotionmoving(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isbmotionpause isbmotionmoving(::roboi_amr_msgs::msg::AngleStatus::_isbmotionmoving_type arg)
  {
    msg_.isbmotionmoving = std::move(arg);
    return Init_AngleStatus_isbmotionpause(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isblimitoverpositive
{
public:
  explicit Init_AngleStatus_isblimitoverpositive(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isbmotionmoving isblimitoverpositive(::roboi_amr_msgs::msg::AngleStatus::_isblimitoverpositive_type arg)
  {
    msg_.isblimitoverpositive = std::move(arg);
    return Init_AngleStatus_isbmotionmoving(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isblimitoverpegative
{
public:
  explicit Init_AngleStatus_isblimitoverpegative(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isblimitoverpositive isblimitoverpegative(::roboi_amr_msgs::msg::AngleStatus::_isblimitoverpegative_type arg)
  {
    msg_.isblimitoverpegative = std::move(arg);
    return Init_AngleStatus_isblimitoverpositive(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isberrorall
{
public:
  explicit Init_AngleStatus_isberrorall(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isblimitoverpegative isberrorall(::roboi_amr_msgs::msg::AngleStatus::_isberrorall_type arg)
  {
    msg_.isberrorall = std::move(arg);
    return Init_AngleStatus_isblimitoverpegative(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbemergencystop
{
public:
  explicit Init_AngleStatus_isbemergencystop(::roboi_amr_msgs::msg::AngleStatus & msg)
  : msg_(msg)
  {}
  Init_AngleStatus_isberrorall isbemergencystop(::roboi_amr_msgs::msg::AngleStatus::_isbemergencystop_type arg)
  {
    msg_.isbemergencystop = std::move(arg);
    return Init_AngleStatus_isberrorall(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

class Init_AngleStatus_isbalarmreset
{
public:
  Init_AngleStatus_isbalarmreset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleStatus_isbemergencystop isbalarmreset(::roboi_amr_msgs::msg::AngleStatus::_isbalarmreset_type arg)
  {
    msg_.isbalarmreset = std::move(arg);
    return Init_AngleStatus_isbemergencystop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::AngleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::AngleStatus>()
{
  return roboi_amr_msgs::msg::builder::Init_AngleStatus_isbalarmreset();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__BUILDER_HPP_
