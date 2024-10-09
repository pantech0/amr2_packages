// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/Ststatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__STSTATUS__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__STSTATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/ststatus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_Ststatus_positemno
{
public:
  explicit Init_Ststatus_positemno(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::Ststatus positemno(::roboi_amr_msgs::msg::Ststatus::_positemno_type arg)
  {
    msg_.positemno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_actvel
{
public:
  explicit Init_Ststatus_actvel(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_positemno actvel(::roboi_amr_msgs::msg::Ststatus::_actvel_type arg)
  {
    msg_.actvel = std::move(arg);
    return Init_Ststatus_positemno(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_actposerr
{
public:
  explicit Init_Ststatus_actposerr(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_actvel actposerr(::roboi_amr_msgs::msg::Ststatus::_actposerr_type arg)
  {
    msg_.actposerr = std::move(arg);
    return Init_Ststatus_actvel(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_actpos
{
public:
  explicit Init_Ststatus_actpos(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_actposerr actpos(::roboi_amr_msgs::msg::Ststatus::_actpos_type arg)
  {
    msg_.actpos = std::move(arg);
    return Init_Ststatus_actposerr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_cmdpos
{
public:
  explicit Init_Ststatus_cmdpos(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_actpos cmdpos(::roboi_amr_msgs::msg::Ststatus::_cmdpos_type arg)
  {
    msg_.cmdpos = std::move(arg);
    return Init_Ststatus_actpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbmotorstop
{
public:
  explicit Init_Ststatus_isbmotorstop(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_cmdpos isbmotorstop(::roboi_amr_msgs::msg::Ststatus::_isbmotorstop_type arg)
  {
    msg_.isbmotorstop = std::move(arg);
    return Init_Ststatus_cmdpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isboverload
{
public:
  explicit Init_Ststatus_isboverload(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbmotorstop isboverload(::roboi_amr_msgs::msg::Ststatus::_isboverload_type arg)
  {
    msg_.isboverload = std::move(arg);
    return Init_Ststatus_isbmotorstop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbmotionpause
{
public:
  explicit Init_Ststatus_isbmotionpause(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isboverload isbmotionpause(::roboi_amr_msgs::msg::Ststatus::_isbmotionpause_type arg)
  {
    msg_.isbmotionpause = std::move(arg);
    return Init_Ststatus_isboverload(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbmotionmoving
{
public:
  explicit Init_Ststatus_isbmotionmoving(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbmotionpause isbmotionmoving(::roboi_amr_msgs::msg::Ststatus::_isbmotionmoving_type arg)
  {
    msg_.isbmotionmoving = std::move(arg);
    return Init_Ststatus_isbmotionpause(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbpositiontableend
{
public:
  explicit Init_Ststatus_isbpositiontableend(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbmotionmoving isbpositiontableend(::roboi_amr_msgs::msg::Ststatus::_isbpositiontableend_type arg)
  {
    msg_.isbpositiontableend = std::move(arg);
    return Init_Ststatus_isbmotionmoving(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbalarmreset
{
public:
  explicit Init_Ststatus_isbalarmreset(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbpositiontableend isbalarmreset(::roboi_amr_msgs::msg::Ststatus::_isbalarmreset_type arg)
  {
    msg_.isbalarmreset = std::move(arg);
    return Init_Ststatus_isbpositiontableend(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbservoon
{
public:
  explicit Init_Ststatus_isbservoon(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbalarmreset isbservoon(::roboi_amr_msgs::msg::Ststatus::_isbservoon_type arg)
  {
    msg_.isbservoon = std::move(arg);
    return Init_Ststatus_isbalarmreset(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isboriginreturn
{
public:
  explicit Init_Ststatus_isboriginreturn(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbservoon isboriginreturn(::roboi_amr_msgs::msg::Ststatus::_isboriginreturn_type arg)
  {
    msg_.isboriginreturn = std::move(arg);
    return Init_Ststatus_isbservoon(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbemergencystop
{
public:
  explicit Init_Ststatus_isbemergencystop(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isboriginreturn isbemergencystop(::roboi_amr_msgs::msg::Ststatus::_isbemergencystop_type arg)
  {
    msg_.isbemergencystop = std::move(arg);
    return Init_Ststatus_isboriginreturn(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isboverheat
{
public:
  explicit Init_Ststatus_isboverheat(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbemergencystop isboverheat(::roboi_amr_msgs::msg::Ststatus::_isboverheat_type arg)
  {
    msg_.isboverheat = std::move(arg);
    return Init_Ststatus_isbemergencystop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isbovercurrent
{
public:
  explicit Init_Ststatus_isbovercurrent(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isboverheat isbovercurrent(::roboi_amr_msgs::msg::Ststatus::_isbovercurrent_type arg)
  {
    msg_.isbovercurrent = std::move(arg);
    return Init_Ststatus_isboverheat(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isblimitovernegative
{
public:
  explicit Init_Ststatus_isblimitovernegative(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isbovercurrent isblimitovernegative(::roboi_amr_msgs::msg::Ststatus::_isblimitovernegative_type arg)
  {
    msg_.isblimitovernegative = std::move(arg);
    return Init_Ststatus_isbovercurrent(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isblimitvverpositive
{
public:
  explicit Init_Ststatus_isblimitvverpositive(::roboi_amr_msgs::msg::Ststatus & msg)
  : msg_(msg)
  {}
  Init_Ststatus_isblimitovernegative isblimitvverpositive(::roboi_amr_msgs::msg::Ststatus::_isblimitvverpositive_type arg)
  {
    msg_.isblimitvverpositive = std::move(arg);
    return Init_Ststatus_isblimitovernegative(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

class Init_Ststatus_isberrorall
{
public:
  Init_Ststatus_isberrorall()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ststatus_isblimitvverpositive isberrorall(::roboi_amr_msgs::msg::Ststatus::_isberrorall_type arg)
  {
    msg_.isberrorall = std::move(arg);
    return Init_Ststatus_isblimitvverpositive(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Ststatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::Ststatus>()
{
  return roboi_amr_msgs::msg::builder::Init_Ststatus_isberrorall();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__STSTATUS__BUILDER_HPP_
