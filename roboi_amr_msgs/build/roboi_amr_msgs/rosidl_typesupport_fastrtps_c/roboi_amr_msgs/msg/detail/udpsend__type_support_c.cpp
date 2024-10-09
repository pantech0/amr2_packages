// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roboi_amr_msgs:msg/Udpsend.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/udpsend__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roboi_amr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roboi_amr_msgs/msg/detail/udpsend__struct.h"
#include "roboi_amr_msgs/msg/detail/udpsend__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "roboi_amr_msgs/msg/detail/stststus__functions.h"  // st_fl, st_fr, st_rl, st_rr

// forward declare type support functions
size_t get_serialized_size_roboi_amr_msgs__msg__Stststus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_roboi_amr_msgs__msg__Stststus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus)();


using _Udpsend__ros_msg_type = roboi_amr_msgs__msg__Udpsend;

static bool _Udpsend__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Udpsend__ros_msg_type * ros_message = static_cast<const _Udpsend__ros_msg_type *>(untyped_ros_message);
  // Field name: count
  {
    cdr << ros_message->count;
  }

  // Field name: isindicator
  {
    cdr << ros_message->isindicator;
  }

  // Field name: st_fl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->st_fl, cdr))
    {
      return false;
    }
  }

  // Field name: st_fr
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->st_fr, cdr))
    {
      return false;
    }
  }

  // Field name: st_rl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->st_rl, cdr))
    {
      return false;
    }
  }

  // Field name: st_rr
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->st_rr, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Udpsend__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Udpsend__ros_msg_type * ros_message = static_cast<_Udpsend__ros_msg_type *>(untyped_ros_message);
  // Field name: count
  {
    cdr >> ros_message->count;
  }

  // Field name: isindicator
  {
    cdr >> ros_message->isindicator;
  }

  // Field name: st_fl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->st_fl))
    {
      return false;
    }
  }

  // Field name: st_fr
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->st_fr))
    {
      return false;
    }
  }

  // Field name: st_rl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->st_rl))
    {
      return false;
    }
  }

  // Field name: st_rr
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Stststus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->st_rr))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboi_amr_msgs
size_t get_serialized_size_roboi_amr_msgs__msg__Udpsend(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Udpsend__ros_msg_type * ros_message = static_cast<const _Udpsend__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name count
  {
    size_t item_size = sizeof(ros_message->count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isindicator
  {
    size_t item_size = sizeof(ros_message->isindicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name st_fl

  current_alignment += get_serialized_size_roboi_amr_msgs__msg__Stststus(
    &(ros_message->st_fl), current_alignment);
  // field.name st_fr

  current_alignment += get_serialized_size_roboi_amr_msgs__msg__Stststus(
    &(ros_message->st_fr), current_alignment);
  // field.name st_rl

  current_alignment += get_serialized_size_roboi_amr_msgs__msg__Stststus(
    &(ros_message->st_rl), current_alignment);
  // field.name st_rr

  current_alignment += get_serialized_size_roboi_amr_msgs__msg__Stststus(
    &(ros_message->st_rr), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Udpsend__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboi_amr_msgs__msg__Udpsend(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboi_amr_msgs
size_t max_serialized_size_roboi_amr_msgs__msg__Udpsend(
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

  // member: count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: isindicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: st_fl
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_roboi_amr_msgs__msg__Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: st_fr
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_roboi_amr_msgs__msg__Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: st_rl
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_roboi_amr_msgs__msg__Stststus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: st_rr
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_roboi_amr_msgs__msg__Stststus(
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
    using DataType = roboi_amr_msgs__msg__Udpsend;
    is_plain =
      (
      offsetof(DataType, st_rr) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Udpsend__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roboi_amr_msgs__msg__Udpsend(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Udpsend = {
  "roboi_amr_msgs::msg",
  "Udpsend",
  _Udpsend__cdr_serialize,
  _Udpsend__cdr_deserialize,
  _Udpsend__get_serialized_size,
  _Udpsend__max_serialized_size
};

static rosidl_message_type_support_t _Udpsend__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Udpsend,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Udpsend)() {
  return &_Udpsend__type_support;
}

#if defined(__cplusplus)
}
#endif
