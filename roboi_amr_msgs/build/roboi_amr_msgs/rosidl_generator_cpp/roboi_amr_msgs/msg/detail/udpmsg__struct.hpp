// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboi_amr_msgs:msg/Udpmsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__STRUCT_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'st_fl'
// Member 'st_fr'
// Member 'st_rl'
// Member 'st_rr'
#include "roboi_amr_msgs/msg/detail/angle_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__roboi_amr_msgs__msg__Udpmsg __attribute__((deprecated))
#else
# define DEPRECATED__roboi_amr_msgs__msg__Udpmsg __declspec(deprecated)
#endif

namespace roboi_amr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Udpmsg_
{
  using Type = Udpmsg_<ContainerAllocator>;

  explicit Udpmsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : st_fl(_init),
    st_fr(_init),
    st_rl(_init),
    st_rr(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
    }
  }

  explicit Udpmsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : st_fl(_alloc, _init),
    st_fr(_alloc, _init),
    st_rl(_alloc, _init),
    st_rr(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
    }
  }

  // field types and members
  using _count_type =
    int32_t;
  _count_type count;
  using _st_fl_type =
    roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>;
  _st_fl_type st_fl;
  using _st_fr_type =
    roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>;
  _st_fr_type st_fr;
  using _st_rl_type =
    roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>;
  _st_rl_type st_rl;
  using _st_rr_type =
    roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator>;
  _st_rr_type st_rr;

  // setters for named parameter idiom
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__st_fl(
    const roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> & _arg)
  {
    this->st_fl = _arg;
    return *this;
  }
  Type & set__st_fr(
    const roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> & _arg)
  {
    this->st_fr = _arg;
    return *this;
  }
  Type & set__st_rl(
    const roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> & _arg)
  {
    this->st_rl = _arg;
    return *this;
  }
  Type & set__st_rr(
    const roboi_amr_msgs::msg::AngleStatus_<ContainerAllocator> & _arg)
  {
    this->st_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboi_amr_msgs__msg__Udpmsg
    std::shared_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboi_amr_msgs__msg__Udpmsg
    std::shared_ptr<roboi_amr_msgs::msg::Udpmsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Udpmsg_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->st_fl != other.st_fl) {
      return false;
    }
    if (this->st_fr != other.st_fr) {
      return false;
    }
    if (this->st_rl != other.st_rl) {
      return false;
    }
    if (this->st_rr != other.st_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Udpmsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Udpmsg_

// alias to use template instance with default allocator
using Udpmsg =
  roboi_amr_msgs::msg::Udpmsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__STRUCT_HPP_
