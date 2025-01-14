// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboi_amr_msgs:msg/AngleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__STRUCT_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roboi_amr_msgs__msg__AngleStatus __attribute__((deprecated))
#else
# define DEPRECATED__roboi_amr_msgs__msg__AngleStatus __declspec(deprecated)
#endif

namespace roboi_amr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AngleStatus_
{
  using Type = AngleStatus_<ContainerAllocator>;

  explicit AngleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->isbalarmreset = false;
      this->isbemergencystop = false;
      this->isberrorall = false;
      this->isblimitoverpegative = false;
      this->isblimitoverpositive = false;
      this->isbmotionmoving = false;
      this->isbmotionpause = false;
      this->isboriginreturn = false;
      this->isbovercurrent = false;
      this->isboverheat = false;
      this->isbpositiontableend = false;
      this->isbservoon = false;
      this->cmdpos = 0l;
      this->actpos = 0l;
      this->actposerr = 0l;
      this->actvel = 0l;
      this->positemno = 0l;
    }
  }

  explicit AngleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->isbalarmreset = false;
      this->isbemergencystop = false;
      this->isberrorall = false;
      this->isblimitoverpegative = false;
      this->isblimitoverpositive = false;
      this->isbmotionmoving = false;
      this->isbmotionpause = false;
      this->isboriginreturn = false;
      this->isbovercurrent = false;
      this->isboverheat = false;
      this->isbpositiontableend = false;
      this->isbservoon = false;
      this->cmdpos = 0l;
      this->actpos = 0l;
      this->actposerr = 0l;
      this->actvel = 0l;
      this->positemno = 0l;
    }
  }

  // field types and members
  using _isbalarmreset_type =
    bool;
  _isbalarmreset_type isbalarmreset;
  using _isbemergencystop_type =
    bool;
  _isbemergencystop_type isbemergencystop;
  using _isberrorall_type =
    bool;
  _isberrorall_type isberrorall;
  using _isblimitoverpegative_type =
    bool;
  _isblimitoverpegative_type isblimitoverpegative;
  using _isblimitoverpositive_type =
    bool;
  _isblimitoverpositive_type isblimitoverpositive;
  using _isbmotionmoving_type =
    bool;
  _isbmotionmoving_type isbmotionmoving;
  using _isbmotionpause_type =
    bool;
  _isbmotionpause_type isbmotionpause;
  using _isboriginreturn_type =
    bool;
  _isboriginreturn_type isboriginreturn;
  using _isbovercurrent_type =
    bool;
  _isbovercurrent_type isbovercurrent;
  using _isboverheat_type =
    bool;
  _isboverheat_type isboverheat;
  using _isbpositiontableend_type =
    bool;
  _isbpositiontableend_type isbpositiontableend;
  using _isbservoon_type =
    bool;
  _isbservoon_type isbservoon;
  using _cmdpos_type =
    int32_t;
  _cmdpos_type cmdpos;
  using _actpos_type =
    int32_t;
  _actpos_type actpos;
  using _actposerr_type =
    int32_t;
  _actposerr_type actposerr;
  using _actvel_type =
    int32_t;
  _actvel_type actvel;
  using _positemno_type =
    int32_t;
  _positemno_type positemno;

  // setters for named parameter idiom
  Type & set__isbalarmreset(
    const bool & _arg)
  {
    this->isbalarmreset = _arg;
    return *this;
  }
  Type & set__isbemergencystop(
    const bool & _arg)
  {
    this->isbemergencystop = _arg;
    return *this;
  }
  Type & set__isberrorall(
    const bool & _arg)
  {
    this->isberrorall = _arg;
    return *this;
  }
  Type & set__isblimitoverpegative(
    const bool & _arg)
  {
    this->isblimitoverpegative = _arg;
    return *this;
  }
  Type & set__isblimitoverpositive(
    const bool & _arg)
  {
    this->isblimitoverpositive = _arg;
    return *this;
  }
  Type & set__isbmotionmoving(
    const bool & _arg)
  {
    this->isbmotionmoving = _arg;
    return *this;
  }
  Type & set__isbmotionpause(
    const bool & _arg)
  {
    this->isbmotionpause = _arg;
    return *this;
  }
  Type & set__isboriginreturn(
    const bool & _arg)
  {
    this->isboriginreturn = _arg;
    return *this;
  }
  Type & set__isbovercurrent(
    const bool & _arg)
  {
    this->isbovercurrent = _arg;
    return *this;
  }
  Type & set__isboverheat(
    const bool & _arg)
  {
    this->isboverheat = _arg;
    return *this;
  }
  Type & set__isbpositiontableend(
    const bool & _arg)
  {
    this->isbpositiontableend = _arg;
    return *this;
  }
  Type & set__isbservoon(
    const bool & _arg)
  {
    this->isbservoon = _arg;
    return *this;
  }
  Type & set__cmdpos(
    const int32_t & _arg)
  {
    this->cmdpos = _arg;
    return *this;
  }
  Type & set__actpos(
    const int32_t & _arg)
  {
    this->actpos = _arg;
    return *this;
  }
  Type & set__actposerr(
    const int32_t & _arg)
  {
    this->actposerr = _arg;
    return *this;
  }
  Type & set__actvel(
    const int32_t & _arg)
  {
    this->actvel = _arg;
    return *this;
  }
  Type & set__positemno(
    const int32_t & _arg)
  {
    this->positemno = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboi_amr_msgs__msg__AngleStatus
    std::shared_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboi_amr_msgs__msg__AngleStatus
    std::shared_ptr<roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleStatus_ & other) const
  {
    if (this->isbalarmreset != other.isbalarmreset) {
      return false;
    }
    if (this->isbemergencystop != other.isbemergencystop) {
      return false;
    }
    if (this->isberrorall != other.isberrorall) {
      return false;
    }
    if (this->isblimitoverpegative != other.isblimitoverpegative) {
      return false;
    }
    if (this->isblimitoverpositive != other.isblimitoverpositive) {
      return false;
    }
    if (this->isbmotionmoving != other.isbmotionmoving) {
      return false;
    }
    if (this->isbmotionpause != other.isbmotionpause) {
      return false;
    }
    if (this->isboriginreturn != other.isboriginreturn) {
      return false;
    }
    if (this->isbovercurrent != other.isbovercurrent) {
      return false;
    }
    if (this->isboverheat != other.isboverheat) {
      return false;
    }
    if (this->isbpositiontableend != other.isbpositiontableend) {
      return false;
    }
    if (this->isbservoon != other.isbservoon) {
      return false;
    }
    if (this->cmdpos != other.cmdpos) {
      return false;
    }
    if (this->actpos != other.actpos) {
      return false;
    }
    if (this->actposerr != other.actposerr) {
      return false;
    }
    if (this->actvel != other.actvel) {
      return false;
    }
    if (this->positemno != other.positemno) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleStatus_

// alias to use template instance with default allocator
using AngleStatus =
  roboi_amr_msgs::msg::AngleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__STRUCT_HPP_
