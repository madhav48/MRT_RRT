// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:srv/Rrtpath.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__TRAITS_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_interfaces/srv/detail/rrtpath__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'coordinates'
// Member 'info'
#include "std_msgs/msg/detail/int64_multi_array__traits.hpp"

namespace aruco_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rrtpath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rrtpath_Request & msg,
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

  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinates:\n";
    to_block_style_yaml(msg.coordinates, out, indentation + 2);
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rrtpath_Request & msg, bool use_flow_style = false)
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

}  // namespace aruco_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aruco_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_interfaces::srv::Rrtpath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::srv::Rrtpath_Request & msg)
{
  return aruco_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::srv::Rrtpath_Request>()
{
  return "aruco_interfaces::srv::Rrtpath_Request";
}

template<>
inline const char * name<aruco_interfaces::srv::Rrtpath_Request>()
{
  return "aruco_interfaces/srv/Rrtpath_Request";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::Rrtpath_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<std_msgs::msg::Int64MultiArray>::value> {};

template<>
struct has_bounded_size<aruco_interfaces::srv::Rrtpath_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<std_msgs::msg::Int64MultiArray>::value> {};

template<>
struct is_message<aruco_interfaces::srv::Rrtpath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'coordinates'
// already included above
// #include "std_msgs/msg/detail/int64_multi_array__traits.hpp"

namespace aruco_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rrtpath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rrtpath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinates:\n";
    to_block_style_yaml(msg.coordinates, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rrtpath_Response & msg, bool use_flow_style = false)
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

}  // namespace aruco_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aruco_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_interfaces::srv::Rrtpath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::srv::Rrtpath_Response & msg)
{
  return aruco_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::srv::Rrtpath_Response>()
{
  return "aruco_interfaces::srv::Rrtpath_Response";
}

template<>
inline const char * name<aruco_interfaces::srv::Rrtpath_Response>()
{
  return "aruco_interfaces/srv/Rrtpath_Response";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::Rrtpath_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int64MultiArray>::value> {};

template<>
struct has_bounded_size<aruco_interfaces::srv::Rrtpath_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int64MultiArray>::value> {};

template<>
struct is_message<aruco_interfaces::srv::Rrtpath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_interfaces::srv::Rrtpath>()
{
  return "aruco_interfaces::srv::Rrtpath";
}

template<>
inline const char * name<aruco_interfaces::srv::Rrtpath>()
{
  return "aruco_interfaces/srv/Rrtpath";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::Rrtpath>
  : std::integral_constant<
    bool,
    has_fixed_size<aruco_interfaces::srv::Rrtpath_Request>::value &&
    has_fixed_size<aruco_interfaces::srv::Rrtpath_Response>::value
  >
{
};

template<>
struct has_bounded_size<aruco_interfaces::srv::Rrtpath>
  : std::integral_constant<
    bool,
    has_bounded_size<aruco_interfaces::srv::Rrtpath_Request>::value &&
    has_bounded_size<aruco_interfaces::srv::Rrtpath_Response>::value
  >
{
};

template<>
struct is_service<aruco_interfaces::srv::Rrtpath>
  : std::true_type
{
};

template<>
struct is_service_request<aruco_interfaces::srv::Rrtpath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aruco_interfaces::srv::Rrtpath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__TRAITS_HPP_
