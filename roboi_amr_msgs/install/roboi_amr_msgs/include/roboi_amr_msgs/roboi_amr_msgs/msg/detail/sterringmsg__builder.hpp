// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboi_amr_msgs:msg/Sterringmsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__STERRINGMSG__BUILDER_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__STERRINGMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboi_amr_msgs/msg/detail/sterringmsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboi_amr_msgs
{

namespace msg
{

namespace builder
{

class Init_Sterringmsg_positemno
{
public:
  explicit Init_Sterringmsg_positemno(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  ::roboi_amr_msgs::msg::Sterringmsg positemno(::roboi_amr_msgs::msg::Sterringmsg::_positemno_type arg)
  {
    msg_.positemno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_actvel
{
public:
  explicit Init_Sterringmsg_actvel(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_positemno actvel(::roboi_amr_msgs::msg::Sterringmsg::_actvel_type arg)
  {
    msg_.actvel = std::move(arg);
    return Init_Sterringmsg_positemno(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_actposerr
{
public:
  explicit Init_Sterringmsg_actposerr(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_actvel actposerr(::roboi_amr_msgs::msg::Sterringmsg::_actposerr_type arg)
  {
    msg_.actposerr = std::move(arg);
    return Init_Sterringmsg_actvel(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_actpos
{
public:
  explicit Init_Sterringmsg_actpos(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_actposerr actpos(::roboi_amr_msgs::msg::Sterringmsg::_actpos_type arg)
  {
    msg_.actpos = std::move(arg);
    return Init_Sterringmsg_actposerr(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_cmdpos
{
public:
  explicit Init_Sterringmsg_cmdpos(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_actpos cmdpos(::roboi_amr_msgs::msg::Sterringmsg::_cmdpos_type arg)
  {
    msg_.cmdpos = std::move(arg);
    return Init_Sterringmsg_actpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbmotorstop
{
public:
  explicit Init_Sterringmsg_isbmotorstop(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_cmdpos isbmotorstop(::roboi_amr_msgs::msg::Sterringmsg::_isbmotorstop_type arg)
  {
    msg_.isbmotorstop = std::move(arg);
    return Init_Sterringmsg_cmdpos(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isboverload
{
public:
  explicit Init_Sterringmsg_isboverload(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbmotorstop isboverload(::roboi_amr_msgs::msg::Sterringmsg::_isboverload_type arg)
  {
    msg_.isboverload = std::move(arg);
    return Init_Sterringmsg_isbmotorstop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbmotionpause
{
public:
  explicit Init_Sterringmsg_isbmotionpause(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isboverload isbmotionpause(::roboi_amr_msgs::msg::Sterringmsg::_isbmotionpause_type arg)
  {
    msg_.isbmotionpause = std::move(arg);
    return Init_Sterringmsg_isboverload(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbmotionmoving
{
public:
  explicit Init_Sterringmsg_isbmotionmoving(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbmotionpause isbmotionmoving(::roboi_amr_msgs::msg::Sterringmsg::_isbmotionmoving_type arg)
  {
    msg_.isbmotionmoving = std::move(arg);
    return Init_Sterringmsg_isbmotionpause(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbpositiontableend
{
public:
  explicit Init_Sterringmsg_isbpositiontableend(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbmotionmoving isbpositiontableend(::roboi_amr_msgs::msg::Sterringmsg::_isbpositiontableend_type arg)
  {
    msg_.isbpositiontableend = std::move(arg);
    return Init_Sterringmsg_isbmotionmoving(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbalarmreset
{
public:
  explicit Init_Sterringmsg_isbalarmreset(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbpositiontableend isbalarmreset(::roboi_amr_msgs::msg::Sterringmsg::_isbalarmreset_type arg)
  {
    msg_.isbalarmreset = std::move(arg);
    return Init_Sterringmsg_isbpositiontableend(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbservoon
{
public:
  explicit Init_Sterringmsg_isbservoon(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbalarmreset isbservoon(::roboi_amr_msgs::msg::Sterringmsg::_isbservoon_type arg)
  {
    msg_.isbservoon = std::move(arg);
    return Init_Sterringmsg_isbalarmreset(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isboriginreturn
{
public:
  explicit Init_Sterringmsg_isboriginreturn(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbservoon isboriginreturn(::roboi_amr_msgs::msg::Sterringmsg::_isboriginreturn_type arg)
  {
    msg_.isboriginreturn = std::move(arg);
    return Init_Sterringmsg_isbservoon(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbemergencystop
{
public:
  explicit Init_Sterringmsg_isbemergencystop(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isboriginreturn isbemergencystop(::roboi_amr_msgs::msg::Sterringmsg::_isbemergencystop_type arg)
  {
    msg_.isbemergencystop = std::move(arg);
    return Init_Sterringmsg_isboriginreturn(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isboverheat
{
public:
  explicit Init_Sterringmsg_isboverheat(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbemergencystop isboverheat(::roboi_amr_msgs::msg::Sterringmsg::_isboverheat_type arg)
  {
    msg_.isboverheat = std::move(arg);
    return Init_Sterringmsg_isbemergencystop(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isbovercurrent
{
public:
  explicit Init_Sterringmsg_isbovercurrent(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isboverheat isbovercurrent(::roboi_amr_msgs::msg::Sterringmsg::_isbovercurrent_type arg)
  {
    msg_.isbovercurrent = std::move(arg);
    return Init_Sterringmsg_isboverheat(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isblimitovernegative
{
public:
  explicit Init_Sterringmsg_isblimitovernegative(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isbovercurrent isblimitovernegative(::roboi_amr_msgs::msg::Sterringmsg::_isblimitovernegative_type arg)
  {
    msg_.isblimitovernegative = std::move(arg);
    return Init_Sterringmsg_isbovercurrent(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isblimitvverpositive
{
public:
  explicit Init_Sterringmsg_isblimitvverpositive(::roboi_amr_msgs::msg::Sterringmsg & msg)
  : msg_(msg)
  {}
  Init_Sterringmsg_isblimitovernegative isblimitvverpositive(::roboi_amr_msgs::msg::Sterringmsg::_isblimitvverpositive_type arg)
  {
    msg_.isblimitvverpositive = std::move(arg);
    return Init_Sterringmsg_isblimitovernegative(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

class Init_Sterringmsg_isberrorall
{
public:
  Init_Sterringmsg_isberrorall()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sterringmsg_isblimitvverpositive isberrorall(::roboi_amr_msgs::msg::Sterringmsg::_isberrorall_type arg)
  {
    msg_.isberrorall = std::move(arg);
    return Init_Sterringmsg_isblimitvverpositive(msg_);
  }

private:
  ::roboi_amr_msgs::msg::Sterringmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboi_amr_msgs::msg::Sterringmsg>()
{
  return roboi_amr_msgs::msg::builder::Init_Sterringmsg_isberrorall();
}

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__STERRINGMSG__BUILDER_HPP_
