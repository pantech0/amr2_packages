// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboi_amr_msgs:msg/Udpsend.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__UDPSEND__TRAITS_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__UDPSEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roboi_amr_msgs/msg/detail/udpsend__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'st_fl'
// Member 'st_fr'
// Member 'st_rl'
// Member 'st_rr'
#include "roboi_amr_msgs/msg/detail/stststus__traits.hpp"

namespace roboi_amr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Udpsend & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: isindicator
  {
    out << "isindicator: ";
    rosidl_generator_traits::value_to_yaml(msg.isindicator, out);
    out << ", ";
  }

  // member: st_fl
  {
    out << "st_fl: ";
    to_flow_style_yaml(msg.st_fl, out);
    out << ", ";
  }

  // member: st_fr
  {
    out << "st_fr: ";
    to_flow_style_yaml(msg.st_fr, out);
    out << ", ";
  }

  // member: st_rl
  {
    out << "st_rl: ";
    to_flow_style_yaml(msg.st_rl, out);
    out << ", ";
  }

  // member: st_rr
  {
    out << "st_rr: ";
    to_flow_style_yaml(msg.st_rr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Udpsend & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: isindicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isindicator: ";
    rosidl_generator_traits::value_to_yaml(msg.isindicator, out);
    out << "\n";
  }

  // member: st_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "st_fl:\n";
    to_block_style_yaml(msg.st_fl, out, indentation + 2);
  }

  // member: st_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "st_fr:\n";
    to_block_style_yaml(msg.st_fr, out, indentation + 2);
  }

  // member: st_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "st_rl:\n";
    to_block_style_yaml(msg.st_rl, out, indentation + 2);
  }

  // member: st_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "st_rr:\n";
    to_block_style_yaml(msg.st_rr, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Udpsend & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roboi_amr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use roboi_amr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roboi_amr_msgs::msg::Udpsend & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboi_amr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboi_amr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const roboi_amr_msgs::msg::Udpsend & msg)
{
  return roboi_amr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roboi_amr_msgs::msg::Udpsend>()
{
  return "roboi_amr_msgs::msg::Udpsend";
}

template<>
inline const char * name<roboi_amr_msgs::msg::Udpsend>()
{
  return "roboi_amr_msgs/msg/Udpsend";
}

template<>
struct has_fixed_size<roboi_amr_msgs::msg::Udpsend>
  : std::integral_constant<bool, has_fixed_size<roboi_amr_msgs::msg::Stststus>::value> {};

template<>
struct has_bounded_size<roboi_amr_msgs::msg::Udpsend>
  : std::integral_constant<bool, has_bounded_size<roboi_amr_msgs::msg::Stststus>::value> {};

template<>
struct is_message<roboi_amr_msgs::msg::Udpsend>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__UDPSEND__TRAITS_HPP_
