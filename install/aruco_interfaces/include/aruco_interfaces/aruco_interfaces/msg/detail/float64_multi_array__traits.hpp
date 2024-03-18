// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__TRAITS_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_interfaces/msg/detail/float64_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aruco_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Float64MultiArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Float64MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Float64MultiArray & msg, bool use_flow_style = false)
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

}  // namespace aruco_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aruco_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_interfaces::msg::Float64MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::msg::Float64MultiArray & msg)
{
  return aruco_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::msg::Float64MultiArray>()
{
  return "aruco_interfaces::msg::Float64MultiArray";
}

template<>
inline const char * name<aruco_interfaces::msg::Float64MultiArray>()
{
  return "aruco_interfaces/msg/Float64MultiArray";
}

template<>
struct has_fixed_size<aruco_interfaces::msg::Float64MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_interfaces::msg::Float64MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_interfaces::msg::Float64MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__TRAITS_HPP_
