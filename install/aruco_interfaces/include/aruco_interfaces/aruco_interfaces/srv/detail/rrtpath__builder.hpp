// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:srv/Rrtpath.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__BUILDER_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_interfaces/srv/detail/rrtpath__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rrtpath_Request_info
{
public:
  explicit Init_Rrtpath_Request_info(::aruco_interfaces::srv::Rrtpath_Request & msg)
  : msg_(msg)
  {}
  ::aruco_interfaces::srv::Rrtpath_Request info(::aruco_interfaces::srv::Rrtpath_Request::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::Rrtpath_Request msg_;
};

class Init_Rrtpath_Request_coordinates
{
public:
  explicit Init_Rrtpath_Request_coordinates(::aruco_interfaces::srv::Rrtpath_Request & msg)
  : msg_(msg)
  {}
  Init_Rrtpath_Request_info coordinates(::aruco_interfaces::srv::Rrtpath_Request::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_Rrtpath_Request_info(msg_);
  }

private:
  ::aruco_interfaces::srv::Rrtpath_Request msg_;
};

class Init_Rrtpath_Request_image
{
public:
  Init_Rrtpath_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rrtpath_Request_coordinates image(::aruco_interfaces::srv::Rrtpath_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_Rrtpath_Request_coordinates(msg_);
  }

private:
  ::aruco_interfaces::srv::Rrtpath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::Rrtpath_Request>()
{
  return aruco_interfaces::srv::builder::Init_Rrtpath_Request_image();
}

}  // namespace aruco_interfaces


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rrtpath_Response_coordinates
{
public:
  Init_Rrtpath_Response_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::srv::Rrtpath_Response coordinates(::aruco_interfaces::srv::Rrtpath_Response::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::Rrtpath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::Rrtpath_Response>()
{
  return aruco_interfaces::srv::builder::Init_Rrtpath_Response_coordinates();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__BUILDER_HPP_
