// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roboi_amr_msgs:msg/Udpsend.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/udpsend__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roboi_amr_msgs/msg/detail/udpsend__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace roboi_amr_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const roboi_amr_msgs::msg::Stststus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  roboi_amr_msgs::msg::Stststus &);
size_t get_serialized_size(
  const roboi_amr_msgs::msg::Stststus &,
  size_t current_alignment);
size_t
max_serialized_size_Stststus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace roboi_amr_msgs

// functions for roboi_amr_msgs::msg::Stststus already declared above

// functions for roboi_amr_msgs::msg::Stststus already declared above

// functions for roboi_amr_msgs::msg::Stststus already declared above


namespace roboi_amr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
cdr_serialize(
  const roboi_amr_msgs::msg::Udpsend & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: count
  cdr << ros_message.count;
  // Member: isindicator
  cdr << ros_message.isindicator;
  // Member: st_fl
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.st_fl,
    cdr);
  // Member: st_fr
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.st_fr,
    cdr);
  // Member: st_rl
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.st_rl,
    cdr);
  // Member: st_rr
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.st_rr,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roboi_amr_msgs::msg::Udpsend & ros_message)
{
  // Member: count
  cdr >> ros_message.count;

  // Member: isindicator
  cdr >> ros_message.isindicator;

  // Member: st_fl
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.st_fl);

  // Member: st_fr
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.st_fr);

  // Member: st_rl
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.st_rl);

  // Member: st_rr
  roboi_amr_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.st_rr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
get_serialized_size(
  const roboi_amr_msgs::msg::Udpsend & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: count
  {
    size_t item_size = sizeof(ros_message.count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isindicator
  {
    size_t item_size = sizeof(ros_message.isindicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: st_fl

  current_alignment +=
    roboi_amr_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.st_fl, current_alignment);
  // Member: st_fr

  current_alignment +=
    roboi_amr_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.st_fr, current_alignment);
  // Member: st_rl

  current_alignment +=
    roboi_amr_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.st_rl, current_alignment);
  // Member: st_rr

  current_alignment +=
    roboi_amr_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.st_rr, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
max_serialized_size_Udpsend(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: isindicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: st_fl
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        roboi_amr_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: st_fr
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        roboi_amr_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: st_rl
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        roboi_amr_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: st_rr
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        roboi_amr_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roboi_amr_msgs::msg::Udpsend;
    is_plain =
      (
      offsetof(DataType, st_rr) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Udpsend__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const roboi_amr_msgs::msg::Udpsend *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Udpsend__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roboi_amr_msgs::msg::Udpsend *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Udpsend__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roboi_amr_msgs::msg::Udpsend *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Udpsend__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Udpsend(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Udpsend__callbacks = {
  "roboi_amr_msgs::msg",
  "Udpsend",
  _Udpsend__cdr_serialize,
  _Udpsend__cdr_deserialize,
  _Udpsend__get_serialized_size,
  _Udpsend__max_serialized_size
};

static rosidl_message_type_support_t _Udpsend__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Udpsend__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roboi_amr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roboi_amr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roboi_amr_msgs::msg::Udpsend>()
{
  return &roboi_amr_msgs::msg::typesupport_fastrtps_cpp::_Udpsend__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roboi_amr_msgs, msg, Udpsend)() {
  return &roboi_amr_msgs::msg::typesupport_fastrtps_cpp::_Udpsend__handle;
}

#ifdef __cplusplus
}
#endif
