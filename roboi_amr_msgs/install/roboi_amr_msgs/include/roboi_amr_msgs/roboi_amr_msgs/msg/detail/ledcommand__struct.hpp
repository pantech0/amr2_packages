// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__STRUCT_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roboi_amr_msgs__msg__Ledcommand __attribute__((deprecated))
#else
# define DEPRECATED__roboi_amr_msgs__msg__Ledcommand __declspec(deprecated)
#endif

namespace roboi_amr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ledcommand_
{
  using Type = Ledcommand_<ContainerAllocator>;

  explicit Ledcommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0;
      this->action = 0;
      this->blinkrate = 0;
    }
  }

  explicit Ledcommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0;
      this->action = 0;
      this->blinkrate = 0;
    }
  }

  // field types and members
  using _target_type =
    uint8_t;
  _target_type target;
  using _action_type =
    uint8_t;
  _action_type action;
  using _blinkrate_type =
    uint16_t;
  _blinkrate_type blinkrate;

  // setters for named parameter idiom
  Type & set__target(
    const uint8_t & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__blinkrate(
    const uint16_t & _arg)
  {
    this->blinkrate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboi_amr_msgs__msg__Ledcommand
    std::shared_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboi_amr_msgs__msg__Ledcommand
    std::shared_ptr<roboi_amr_msgs::msg::Ledcommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ledcommand_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->blinkrate != other.blinkrate) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ledcommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ledcommand_

// alias to use template instance with default allocator
using Ledcommand =
  roboi_amr_msgs::msg::Ledcommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__STRUCT_HPP_
