# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aruco_interfaces:srv/Rrtpath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rrtpath_Request(type):
    """Metaclass of message 'Rrtpath_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aruco_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aruco_interfaces.srv.Rrtpath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrtpath__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrtpath__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrtpath__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrtpath__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrtpath__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from std_msgs.msg import Int64MultiArray
            if Int64MultiArray.__class__._TYPE_SUPPORT is None:
                Int64MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rrtpath_Request(metaclass=Metaclass_Rrtpath_Request):
    """Message class 'Rrtpath_Request'."""

    __slots__ = [
        '_image',
        '_coordinates',
        '_info',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
        'coordinates': 'std_msgs/Int64MultiArray',
        'info': 'std_msgs/Int64MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int64MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int64MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        from std_msgs.msg import Int64MultiArray
        self.coordinates = kwargs.get('coordinates', Int64MultiArray())
        from std_msgs.msg import Int64MultiArray
        self.info = kwargs.get('info', Int64MultiArray())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.image != other.image:
            return False
        if self.coordinates != other.coordinates:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def coordinates(self):
        """Message field 'coordinates'."""
        return self._coordinates

    @coordinates.setter
    def coordinates(self, value):
        if __debug__:
            from std_msgs.msg import Int64MultiArray
            assert \
                isinstance(value, Int64MultiArray), \
                "The 'coordinates' field must be a sub message of type 'Int64MultiArray'"
        self._coordinates = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from std_msgs.msg import Int64MultiArray
            assert \
                isinstance(value, Int64MultiArray), \
                "The 'info' field must be a sub message of type 'Int64MultiArray'"
        self._info = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Rrtpath_Response(type):
    """Metaclass of message 'Rrtpath_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aruco_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aruco_interfaces.srv.Rrtpath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrtpath__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrtpath__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrtpath__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrtpath__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrtpath__response

            from std_msgs.msg import Int64MultiArray
            if Int64MultiArray.__class__._TYPE_SUPPORT is None:
                Int64MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rrtpath_Response(metaclass=Metaclass_Rrtpath_Response):
    """Message class 'Rrtpath_Response'."""

    __slots__ = [
        '_coordinates',
    ]

    _fields_and_field_types = {
        'coordinates': 'std_msgs/Int64MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int64MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Int64MultiArray
        self.coordinates = kwargs.get('coordinates', Int64MultiArray())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.coordinates != other.coordinates:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def coordinates(self):
        """Message field 'coordinates'."""
        return self._coordinates

    @coordinates.setter
    def coordinates(self, value):
        if __debug__:
            from std_msgs.msg import Int64MultiArray
            assert \
                isinstance(value, Int64MultiArray), \
                "The 'coordinates' field must be a sub message of type 'Int64MultiArray'"
        self._coordinates = value


class Metaclass_Rrtpath(type):
    """Metaclass of service 'Rrtpath'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aruco_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aruco_interfaces.srv.Rrtpath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rrtpath

            from aruco_interfaces.srv import _rrtpath
            if _rrtpath.Metaclass_Rrtpath_Request._TYPE_SUPPORT is None:
                _rrtpath.Metaclass_Rrtpath_Request.__import_type_support__()
            if _rrtpath.Metaclass_Rrtpath_Response._TYPE_SUPPORT is None:
                _rrtpath.Metaclass_Rrtpath_Response.__import_type_support__()


class Rrtpath(metaclass=Metaclass_Rrtpath):
    from aruco_interfaces.srv._rrtpath import Rrtpath_Request as Request
    from aruco_interfaces.srv._rrtpath import Rrtpath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
