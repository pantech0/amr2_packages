// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__TRAITS_HPP_
#define ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roboi_amr_msgs/srv/detail/led_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roboi_amr_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_fl
  {
    out << "command_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.command_fl, out);
    out << ", ";
  }

  // member: command_fr
  {
    out << "command_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.command_fr, out);
    out << ", ";
  }

  // member: command_rl1
  {
    out << "command_rl1: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rl1, out);
    out << ", ";
  }

  // member: command_rl2
  {
    out << "command_rl2: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rl2, out);
    out << ", ";
  }

  // member: command_rl3
  {
    out << "command_rl3: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rl3, out);
    out << ", ";
  }

  // member: command_rr1
  {
    out << "command_rr1: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rr1, out);
    out << ", ";
  }

  // member: command_rr2
  {
    out << "command_rr2: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rr2, out);
    out << ", ";
  }

  // member: command_rr3
  {
    out << "command_rr3: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rr3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.command_fl, out);
    out << "\n";
  }

  // member: command_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.command_fr, out);
    out << "\n";
  }

  // member: command_rl1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_rl1: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rl1, out);
    out << "\n";
  }

  // member: command_rl2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_rl2: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rl2, out);
    out << "\n";
  }

  // member: command_rl3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_rl3: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rl3, out);
    out << "\n";
  }

  // member: command_rr1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_rr1: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rr1, out);
    out << "\n";
  }

  // member: command_rr2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_rr2: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rr2, out);
    out << "\n";
  }

  // member: command_rr3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_rr3: ";
    rosidl_generator_traits::value_to_yaml(msg.command_rr3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace roboi_amr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use roboi_amr_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roboi_amr_msgs::srv::LedCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboi_amr_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboi_amr_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const roboi_amr_msgs::srv::LedCommand_Request & msg)
{
  return roboi_amr_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roboi_amr_msgs::srv::LedCommand_Request>()
{
  return "roboi_amr_msgs::srv::LedCommand_Request";
}

template<>
inline const char * name<roboi_amr_msgs::srv::LedCommand_Request>()
{
  return "roboi_amr_msgs/srv/LedCommand_Request";
}

template<>
struct has_fixed_size<roboi_amr_msgs::srv::LedCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roboi_amr_msgs::srv::LedCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roboi_amr_msgs::srv::LedCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace roboi_amr_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace roboi_amr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use roboi_amr_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roboi_amr_msgs::srv::LedCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboi_amr_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboi_amr_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const roboi_amr_msgs::srv::LedCommand_Response & msg)
{
  return roboi_amr_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roboi_amr_msgs::srv::LedCommand_Response>()
{
  return "roboi_amr_msgs::srv::LedCommand_Response";
}

template<>
inline const char * name<roboi_amr_msgs::srv::LedCommand_Response>()
{
  return "roboi_amr_msgs/srv/LedCommand_Response";
}

template<>
struct has_fixed_size<roboi_amr_msgs::srv::LedCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roboi_amr_msgs::srv::LedCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roboi_amr_msgs::srv::LedCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roboi_amr_msgs::srv::LedCommand>()
{
  return "roboi_amr_msgs::srv::LedCommand";
}

template<>
inline const char * name<roboi_amr_msgs::srv::LedCommand>()
{
  return "roboi_amr_msgs/srv/LedCommand";
}

template<>
struct has_fixed_size<roboi_amr_msgs::srv::LedCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<roboi_amr_msgs::srv::LedCommand_Request>::value &&
    has_fixed_size<roboi_amr_msgs::srv::LedCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<roboi_amr_msgs::srv::LedCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<roboi_amr_msgs::srv::LedCommand_Request>::value &&
    has_bounded_size<roboi_amr_msgs::srv::LedCommand_Response>::value
  >
{
};

template<>
struct is_service<roboi_amr_msgs::srv::LedCommand>
  : std::true_type
{
};

template<>
struct is_service_request<roboi_amr_msgs::srv::LedCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<roboi_amr_msgs::srv::LedCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__TRAITS_HPP_
