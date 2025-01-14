// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "roboi_amr_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "roboi_amr_msgs/msg/detail/ledcommand__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace roboi_amr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
cdr_serialize(
  const roboi_amr_msgs::msg::Ledcommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roboi_amr_msgs::msg::Ledcommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
get_serialized_size(
  const roboi_amr_msgs::msg::Ledcommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
max_serialized_size_Ledcommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roboi_amr_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roboi_amr_msgs, msg, Ledcommand)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
