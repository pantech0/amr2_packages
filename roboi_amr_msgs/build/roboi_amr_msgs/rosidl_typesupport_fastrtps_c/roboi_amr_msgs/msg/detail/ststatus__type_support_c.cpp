// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roboi_amr_msgs:msg/Ststatus.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/ststatus__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roboi_amr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roboi_amr_msgs/msg/detail/ststatus__struct.h"
#include "roboi_amr_msgs/msg/detail/ststatus__functions.h"
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


// forward declare type support functions


using _Ststatus__ros_msg_type = roboi_amr_msgs__msg__Ststatus;

static bool _Ststatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ststatus__ros_msg_type * ros_message = static_cast<const _Ststatus__ros_msg_type *>(untyped_ros_message);
  // Field name: isberrorall
  {
    cdr << (ros_message->isberrorall ? true : false);
  }

  // Field name: isblimitvverpositive
  {
    cdr << (ros_message->isblimitvverpositive ? true : false);
  }

  // Field name: isblimitovernegative
  {
    cdr << (ros_message->isblimitovernegative ? true : false);
  }

  // Field name: isbovercurrent
  {
    cdr << (ros_message->isbovercurrent ? true : false);
  }

  // Field name: isboverheat
  {
    cdr << (ros_message->isboverheat ? true : false);
  }

  // Field name: isbemergencystop
  {
    cdr << (ros_message->isbemergencystop ? true : false);
  }

  // Field name: isboriginreturn
  {
    cdr << (ros_message->isboriginreturn ? true : false);
  }

  // Field name: isbservoon
  {
    cdr << (ros_message->isbservoon ? true : false);
  }

  // Field name: isbalarmreset
  {
    cdr << (ros_message->isbalarmreset ? true : false);
  }

  // Field name: isbpositiontableend
  {
    cdr << (ros_message->isbpositiontableend ? true : false);
  }

  // Field name: isbmotionmoving
  {
    cdr << (ros_message->isbmotionmoving ? true : false);
  }

  // Field name: isbmotionpause
  {
    cdr << (ros_message->isbmotionpause ? true : false);
  }

  // Field name: isboverload
  {
    cdr << (ros_message->isboverload ? true : false);
  }

  // Field name: isbmotorstop
  {
    cdr << (ros_message->isbmotorstop ? true : false);
  }

  // Field name: cmdpos
  {
    cdr << ros_message->cmdpos;
  }

  // Field name: actpos
  {
    cdr << ros_message->actpos;
  }

  // Field name: actposerr
  {
    cdr << ros_message->actposerr;
  }

  // Field name: actvel
  {
    cdr << ros_message->actvel;
  }

  // Field name: positemno
  {
    cdr << ros_message->positemno;
  }

  return true;
}

static bool _Ststatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ststatus__ros_msg_type * ros_message = static_cast<_Ststatus__ros_msg_type *>(untyped_ros_message);
  // Field name: isberrorall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isberrorall = tmp ? true : false;
  }

  // Field name: isblimitvverpositive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isblimitvverpositive = tmp ? true : false;
  }

  // Field name: isblimitovernegative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isblimitovernegative = tmp ? true : false;
  }

  // Field name: isbovercurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbovercurrent = tmp ? true : false;
  }

  // Field name: isboverheat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isboverheat = tmp ? true : false;
  }

  // Field name: isbemergencystop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbemergencystop = tmp ? true : false;
  }

  // Field name: isboriginreturn
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isboriginreturn = tmp ? true : false;
  }

  // Field name: isbservoon
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbservoon = tmp ? true : false;
  }

  // Field name: isbalarmreset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbalarmreset = tmp ? true : false;
  }

  // Field name: isbpositiontableend
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbpositiontableend = tmp ? true : false;
  }

  // Field name: isbmotionmoving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbmotionmoving = tmp ? true : false;
  }

  // Field name: isbmotionpause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbmotionpause = tmp ? true : false;
  }

  // Field name: isboverload
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isboverload = tmp ? true : false;
  }

  // Field name: isbmotorstop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isbmotorstop = tmp ? true : false;
  }

  // Field name: cmdpos
  {
    cdr >> ros_message->cmdpos;
  }

  // Field name: actpos
  {
    cdr >> ros_message->actpos;
  }

  // Field name: actposerr
  {
    cdr >> ros_message->actposerr;
  }

  // Field name: actvel
  {
    cdr >> ros_message->actvel;
  }

  // Field name: positemno
  {
    cdr >> ros_message->positemno;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboi_amr_msgs
size_t get_serialized_size_roboi_amr_msgs__msg__Ststatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ststatus__ros_msg_type * ros_message = static_cast<const _Ststatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name isberrorall
  {
    size_t item_size = sizeof(ros_message->isberrorall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isblimitvverpositive
  {
    size_t item_size = sizeof(ros_message->isblimitvverpositive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isblimitovernegative
  {
    size_t item_size = sizeof(ros_message->isblimitovernegative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbovercurrent
  {
    size_t item_size = sizeof(ros_message->isbovercurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isboverheat
  {
    size_t item_size = sizeof(ros_message->isboverheat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbemergencystop
  {
    size_t item_size = sizeof(ros_message->isbemergencystop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isboriginreturn
  {
    size_t item_size = sizeof(ros_message->isboriginreturn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbservoon
  {
    size_t item_size = sizeof(ros_message->isbservoon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbalarmreset
  {
    size_t item_size = sizeof(ros_message->isbalarmreset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbpositiontableend
  {
    size_t item_size = sizeof(ros_message->isbpositiontableend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbmotionmoving
  {
    size_t item_size = sizeof(ros_message->isbmotionmoving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbmotionpause
  {
    size_t item_size = sizeof(ros_message->isbmotionpause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isboverload
  {
    size_t item_size = sizeof(ros_message->isboverload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isbmotorstop
  {
    size_t item_size = sizeof(ros_message->isbmotorstop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmdpos
  {
    size_t item_size = sizeof(ros_message->cmdpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actpos
  {
    size_t item_size = sizeof(ros_message->actpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actposerr
  {
    size_t item_size = sizeof(ros_message->actposerr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actvel
  {
    size_t item_size = sizeof(ros_message->actvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name positemno
  {
    size_t item_size = sizeof(ros_message->positemno);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ststatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboi_amr_msgs__msg__Ststatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboi_amr_msgs
size_t max_serialized_size_roboi_amr_msgs__msg__Ststatus(
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

  // member: isberrorall
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isblimitvverpositive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isblimitovernegative
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbovercurrent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isboverheat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbemergencystop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isboriginreturn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbservoon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbalarmreset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbpositiontableend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbmotionmoving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbmotionpause
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isboverload
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isbmotorstop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmdpos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actpos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actposerr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actvel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: positemno
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roboi_amr_msgs__msg__Ststatus;
    is_plain =
      (
      offsetof(DataType, positemno) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Ststatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roboi_amr_msgs__msg__Ststatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ststatus = {
  "roboi_amr_msgs::msg",
  "Ststatus",
  _Ststatus__cdr_serialize,
  _Ststatus__cdr_deserialize,
  _Ststatus__get_serialized_size,
  _Ststatus__max_serialized_size
};

static rosidl_message_type_support_t _Ststatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ststatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboi_amr_msgs, msg, Ststatus)() {
  return &_Ststatus__type_support;
}

#if defined(__cplusplus)
}
#endif
