// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_interfaces/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace aruco_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Image & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Image & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Image & msg, bool use_flow_style = false)
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
  const aruco_interfaces::msg::Image & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::msg::Image & msg)
{
  return aruco_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::msg::Image>()
{
  return "aruco_interfaces::msg::Image";
}

template<>
inline const char * name<aruco_interfaces::msg::Image>()
{
  return "aruco_interfaces/msg/Image";
}

template<>
struct has_fixed_size<aruco_interfaces::msg::Image>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<aruco_interfaces::msg::Image>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<aruco_interfaces::msg::Image>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_
