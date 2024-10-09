// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__STRUCT_HPP_
#define ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roboi_amr_msgs__srv__LedCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__roboi_amr_msgs__srv__LedCommand_Request __declspec(deprecated)
#endif

namespace roboi_amr_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedCommand_Request_
{
  using Type = LedCommand_Request_<ContainerAllocator>;

  explicit LedCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_fl = 0;
      this->command_fr = 0;
      this->command_rl1 = 0;
      this->command_rl2 = 0;
      this->command_rl3 = 0;
      this->command_rr1 = 0;
      this->command_rr2 = 0;
      this->command_rr3 = 0;
    }
  }

  explicit LedCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_fl = 0;
      this->command_fr = 0;
      this->command_rl1 = 0;
      this->command_rl2 = 0;
      this->command_rl3 = 0;
      this->command_rr1 = 0;
      this->command_rr2 = 0;
      this->command_rr3 = 0;
    }
  }

  // field types and members
  using _command_fl_type =
    uint8_t;
  _command_fl_type command_fl;
  using _command_fr_type =
    uint8_t;
  _command_fr_type command_fr;
  using _command_rl1_type =
    uint8_t;
  _command_rl1_type command_rl1;
  using _command_rl2_type =
    uint8_t;
  _command_rl2_type command_rl2;
  using _command_rl3_type =
    uint8_t;
  _command_rl3_type command_rl3;
  using _command_rr1_type =
    uint8_t;
  _command_rr1_type command_rr1;
  using _command_rr2_type =
    uint8_t;
  _command_rr2_type command_rr2;
  using _command_rr3_type =
    uint8_t;
  _command_rr3_type command_rr3;

  // setters for named parameter idiom
  Type & set__command_fl(
    const uint8_t & _arg)
  {
    this->command_fl = _arg;
    return *this;
  }
  Type & set__command_fr(
    const uint8_t & _arg)
  {
    this->command_fr = _arg;
    return *this;
  }
  Type & set__command_rl1(
    const uint8_t & _arg)
  {
    this->command_rl1 = _arg;
    return *this;
  }
  Type & set__command_rl2(
    const uint8_t & _arg)
  {
    this->command_rl2 = _arg;
    return *this;
  }
  Type & set__command_rl3(
    const uint8_t & _arg)
  {
    this->command_rl3 = _arg;
    return *this;
  }
  Type & set__command_rr1(
    const uint8_t & _arg)
  {
    this->command_rr1 = _arg;
    return *this;
  }
  Type & set__command_rr2(
    const uint8_t & _arg)
  {
    this->command_rr2 = _arg;
    return *this;
  }
  Type & set__command_rr3(
    const uint8_t & _arg)
  {
    this->command_rr3 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COMMAND_NULL =
    0u;
  static constexpr uint8_t COMMAND_OFF =
    1u;
  static constexpr uint8_t COMMAND_ON =
    2u;
  static constexpr uint8_t COMMAND_BLINK =
    3u;

  // pointer types
  using RawPtr =
    roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboi_amr_msgs__srv__LedCommand_Request
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboi_amr_msgs__srv__LedCommand_Request
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedCommand_Request_ & other) const
  {
    if (this->command_fl != other.command_fl) {
      return false;
    }
    if (this->command_fr != other.command_fr) {
      return false;
    }
    if (this->command_rl1 != other.command_rl1) {
      return false;
    }
    if (this->command_rl2 != other.command_rl2) {
      return false;
    }
    if (this->command_rl3 != other.command_rl3) {
      return false;
    }
    if (this->command_rr1 != other.command_rr1) {
      return false;
    }
    if (this->command_rr2 != other.command_rr2) {
      return false;
    }
    if (this->command_rr3 != other.command_rr3) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedCommand_Request_

// alias to use template instance with default allocator
using LedCommand_Request =
  roboi_amr_msgs::srv::LedCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedCommand_Request_<ContainerAllocator>::COMMAND_NULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedCommand_Request_<ContainerAllocator>::COMMAND_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedCommand_Request_<ContainerAllocator>::COMMAND_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedCommand_Request_<ContainerAllocator>::COMMAND_BLINK;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace roboi_amr_msgs


#ifndef _WIN32
# define DEPRECATED__roboi_amr_msgs__srv__LedCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__roboi_amr_msgs__srv__LedCommand_Response __declspec(deprecated)
#endif

namespace roboi_amr_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedCommand_Response_
{
  using Type = LedCommand_Response_<ContainerAllocator>;

  explicit LedCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit LedCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboi_amr_msgs__srv__LedCommand_Response
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboi_amr_msgs__srv__LedCommand_Response
    std::shared_ptr<roboi_amr_msgs::srv::LedCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedCommand_Response_

// alias to use template instance with default allocator
using LedCommand_Response =
  roboi_amr_msgs::srv::LedCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roboi_amr_msgs

namespace roboi_amr_msgs
{

namespace srv
{

struct LedCommand
{
  using Request = roboi_amr_msgs::srv::LedCommand_Request;
  using Response = roboi_amr_msgs::srv::LedCommand_Response;
};

}  // namespace srv

}  // namespace roboi_amr_msgs

#endif  // ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__STRUCT_HPP_
