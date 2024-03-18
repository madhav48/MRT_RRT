// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_interfaces:srv/Rrtpath.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__STRUCT_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'coordinates'
// Member 'info'
#include "std_msgs/msg/detail/int64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__srv__Rrtpath_Request __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__srv__Rrtpath_Request __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rrtpath_Request_
{
  using Type = Rrtpath_Request_<ContainerAllocator>;

  explicit Rrtpath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    coordinates(_init),
    info(_init)
  {
    (void)_init;
  }

  explicit Rrtpath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    coordinates(_alloc, _init),
    info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _coordinates_type =
    std_msgs::msg::Int64MultiArray_<ContainerAllocator>;
  _coordinates_type coordinates;
  using _info_type =
    std_msgs::msg::Int64MultiArray_<ContainerAllocator>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__coordinates(
    const std_msgs::msg::Int64MultiArray_<ContainerAllocator> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }
  Type & set__info(
    const std_msgs::msg::Int64MultiArray_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__srv__Rrtpath_Request
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__srv__Rrtpath_Request
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rrtpath_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->coordinates != other.coordinates) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rrtpath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rrtpath_Request_

// alias to use template instance with default allocator
using Rrtpath_Request =
  aruco_interfaces::srv::Rrtpath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_interfaces


// Include directives for member types
// Member 'coordinates'
// already included above
// #include "std_msgs/msg/detail/int64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__srv__Rrtpath_Response __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__srv__Rrtpath_Response __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rrtpath_Response_
{
  using Type = Rrtpath_Response_<ContainerAllocator>;

  explicit Rrtpath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_init)
  {
    (void)_init;
  }

  explicit Rrtpath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _coordinates_type =
    std_msgs::msg::Int64MultiArray_<ContainerAllocator>;
  _coordinates_type coordinates;

  // setters for named parameter idiom
  Type & set__coordinates(
    const std_msgs::msg::Int64MultiArray_<ContainerAllocator> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__srv__Rrtpath_Response
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__srv__Rrtpath_Response
    std::shared_ptr<aruco_interfaces::srv::Rrtpath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rrtpath_Response_ & other) const
  {
    if (this->coordinates != other.coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rrtpath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rrtpath_Response_

// alias to use template instance with default allocator
using Rrtpath_Response =
  aruco_interfaces::srv::Rrtpath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_interfaces

namespace aruco_interfaces
{

namespace srv
{

struct Rrtpath
{
  using Request = aruco_interfaces::srv::Rrtpath_Request;
  using Response = aruco_interfaces::srv::Rrtpath_Response;
};

}  // namespace srv

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__STRUCT_HPP_
