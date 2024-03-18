// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:srv/Tagid.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__TAGID__TRAITS_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__TAGID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_interfaces/srv/detail/tagid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace aruco_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Tagid_Request & msg,
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
  const Tagid_Request & msg,
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

inline std::string to_yaml(const Tagid_Request & msg, bool use_flow_style = false)
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
  const aruco_interfaces::srv::Tagid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::srv::Tagid_Request & msg)
{
  return aruco_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::srv::Tagid_Request>()
{
  return "aruco_interfaces::srv::Tagid_Request";
}

template<>
inline const char * name<aruco_interfaces::srv::Tagid_Request>()
{
  return "aruco_interfaces/srv/Tagid_Request";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::Tagid_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<aruco_interfaces::srv::Tagid_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<aruco_interfaces::srv::Tagid_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'coordinates'
#include "std_msgs/msg/detail/float64_multi_array__traits.hpp"

namespace aruco_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Tagid_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
    out << ", ";
  }

  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
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
  const Tagid_Response & msg,
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

  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
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

inline std::string to_yaml(const Tagid_Response & msg, bool use_flow_style = false)
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
  const aruco_interfaces::srv::Tagid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::srv::Tagid_Response & msg)
{
  return aruco_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::srv::Tagid_Response>()
{
  return "aruco_interfaces::srv::Tagid_Response";
}

template<>
inline const char * name<aruco_interfaces::srv::Tagid_Response>()
{
  return "aruco_interfaces/srv/Tagid_Response";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::Tagid_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_interfaces::srv::Tagid_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_interfaces::srv::Tagid_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_interfaces::srv::Tagid>()
{
  return "aruco_interfaces::srv::Tagid";
}

template<>
inline const char * name<aruco_interfaces::srv::Tagid>()
{
  return "aruco_interfaces/srv/Tagid";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::Tagid>
  : std::integral_constant<
    bool,
    has_fixed_size<aruco_interfaces::srv::Tagid_Request>::value &&
    has_fixed_size<aruco_interfaces::srv::Tagid_Response>::value
  >
{
};

template<>
struct has_bounded_size<aruco_interfaces::srv::Tagid>
  : std::integral_constant<
    bool,
    has_bounded_size<aruco_interfaces::srv::Tagid_Request>::value &&
    has_bounded_size<aruco_interfaces::srv::Tagid_Response>::value
  >
{
};

template<>
struct is_service<aruco_interfaces::srv::Tagid>
  : std::true_type
{
};

template<>
struct is_service_request<aruco_interfaces::srv::Tagid_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aruco_interfaces::srv::Tagid_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__SRV__DETAIL__TAGID__TRAITS_HPP_
