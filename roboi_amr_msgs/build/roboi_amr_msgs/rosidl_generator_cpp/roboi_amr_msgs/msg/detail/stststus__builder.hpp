// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/Stststus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__STSTSTUS__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__STSTSTUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/stststus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_Stststus_positemno
{
public:
  explicit Init_Stststus_positemno(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::Stststus positemno(::roboi_amr_msgs::msg::Stststus::_positemno_type arg)
  {
    msg_.positemno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_actvel
{
public:
  explicit Init_Stststus_actvel(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_positemno actvel(::roboi_amr_msgs::msg::Stststus::_actvel_type arg)
  {
    msg_.actvel = std::move(arg);
    return Init_Stststus_positemno(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_actposerr
{
public:
  explicit Init_Stststus_actposerr(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_actvel actposerr(::roboi_amr_msgs::msg::Stststus::_actposerr_type arg)
  {
    msg_.actposerr = std::move(arg);
    return Init_Stststus_actvel(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_actpos
{
public:
  explicit Init_Stststus_actpos(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_actposerr actpos(::roboi_amr_msgs::msg::Stststus::_actpos_type arg)
  {
    msg_.actpos = std::move(arg);
    return Init_Stststus_actposerr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_cmdpos
{
public:
  explicit Init_Stststus_cmdpos(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_actpos cmdpos(::roboi_amr_msgs::msg::Stststus::_cmdpos_type arg)
  {
    msg_.cmdpos = std::move(arg);
    return Init_Stststus_actpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbmotorstop
{
public:
  explicit Init_Stststus_isbmotorstop(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_cmdpos isbmotorstop(::roboi_amr_msgs::msg::Stststus::_isbmotorstop_type arg)
  {
    msg_.isbmotorstop = std::move(arg);
    return Init_Stststus_cmdpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isboverload
{
public:
  explicit Init_Stststus_isboverload(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbmotorstop isboverload(::roboi_amr_msgs::msg::Stststus::_isboverload_type arg)
  {
    msg_.isboverload = std::move(arg);
    return Init_Stststus_isbmotorstop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbmotionpause
{
public:
  explicit Init_Stststus_isbmotionpause(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isboverload isbmotionpause(::roboi_amr_msgs::msg::Stststus::_isbmotionpause_type arg)
  {
    msg_.isbmotionpause = std::move(arg);
    return Init_Stststus_isboverload(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbmotionmoving
{
public:
  explicit Init_Stststus_isbmotionmoving(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbmotionpause isbmotionmoving(::roboi_amr_msgs::msg::Stststus::_isbmotionmoving_type arg)
  {
    msg_.isbmotionmoving = std::move(arg);
    return Init_Stststus_isbmotionpause(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbpositiontableend
{
public:
  explicit Init_Stststus_isbpositiontableend(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbmotionmoving isbpositiontableend(::roboi_amr_msgs::msg::Stststus::_isbpositiontableend_type arg)
  {
    msg_.isbpositiontableend = std::move(arg);
    return Init_Stststus_isbmotionmoving(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbalarmreset
{
public:
  explicit Init_Stststus_isbalarmreset(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbpositiontableend isbalarmreset(::roboi_amr_msgs::msg::Stststus::_isbalarmreset_type arg)
  {
    msg_.isbalarmreset = std::move(arg);
    return Init_Stststus_isbpositiontableend(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbservoon
{
public:
  explicit Init_Stststus_isbservoon(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbalarmreset isbservoon(::roboi_amr_msgs::msg::Stststus::_isbservoon_type arg)
  {
    msg_.isbservoon = std::move(arg);
    return Init_Stststus_isbalarmreset(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isboriginreturn
{
public:
  explicit Init_Stststus_isboriginreturn(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbservoon isboriginreturn(::roboi_amr_msgs::msg::Stststus::_isboriginreturn_type arg)
  {
    msg_.isboriginreturn = std::move(arg);
    return Init_Stststus_isbservoon(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbemergencystop
{
public:
  explicit Init_Stststus_isbemergencystop(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isboriginreturn isbemergencystop(::roboi_amr_msgs::msg::Stststus::_isbemergencystop_type arg)
  {
    msg_.isbemergencystop = std::move(arg);
    return Init_Stststus_isboriginreturn(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isboverheat
{
public:
  explicit Init_Stststus_isboverheat(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbemergencystop isboverheat(::roboi_amr_msgs::msg::Stststus::_isboverheat_type arg)
  {
    msg_.isboverheat = std::move(arg);
    return Init_Stststus_isbemergencystop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isbovercurrent
{
public:
  explicit Init_Stststus_isbovercurrent(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isboverheat isbovercurrent(::roboi_amr_msgs::msg::Stststus::_isbovercurrent_type arg)
  {
    msg_.isbovercurrent = std::move(arg);
    return Init_Stststus_isboverheat(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isblimitovernegative
{
public:
  explicit Init_Stststus_isblimitovernegative(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isbovercurrent isblimitovernegative(::roboi_amr_msgs::msg::Stststus::_isblimitovernegative_type arg)
  {
    msg_.isblimitovernegative = std::move(arg);
    return Init_Stststus_isbovercurrent(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isblimitvverpositive
{
public:
  explicit Init_Stststus_isblimitvverpositive(::roboi_amr_msgs::msg::Stststus & msg)
  : msg_(msg)
  {}
  Init_Stststus_isblimitovernegative isblimitvverpositive(::roboi_amr_msgs::msg::Stststus::_isblimitvverpositive_type arg)
  {
    msg_.isblimitvverpositive = std::move(arg);
    return Init_Stststus_isblimitovernegative(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

class Init_Stststus_isberrorall
{
public:
  Init_Stststus_isberrorall()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stststus_isblimitvverpositive isberrorall(::roboi_amr_msgs::msg::Stststus::_isberrorall_type arg)
  {
    msg_.isberrorall = std::move(arg);
    return Init_Stststus_isblimitvverpositive(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Stststus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::Stststus>()
{
  return roboi_amr_msgs::msg::builder::Init_Stststus_isberrorall();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__STSTSTUS__BUILDER_HPP_
