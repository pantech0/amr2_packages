# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roboi_amr_msgs:msg/Udpsend.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Udpsend(type):
    """Metaclass of message 'Udpsend'."""

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
            module = import_type_support('roboi_amr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboi_amr_msgs.msg.Udpsend')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__udpsend
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__udpsend
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__udpsend
            cls._TYPE_SUPPORT = module.type_support_msg__msg__udpsend
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__udpsend

            from roboi_amr_msgs.msg import Ledcommand
            if Ledcommand.__class__._TYPE_SUPPORT is None:
                Ledcommand.__class__.__import_type_support__()

            from roboi_amr_msgs.msg import Stststus
            if Stststus.__class__._TYPE_SUPPORT is None:
                Stststus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Udpsend(metaclass=Metaclass_Udpsend):
    """Message class 'Udpsend'."""

    __slots__ = [
        '_st_fl',
        '_st_fr',
        '_st_rl',
        '_st_rr',
        '_led',
    ]

    _fields_and_field_types = {
        'st_fl': 'roboi_amr_msgs/Stststus',
        'st_fr': 'roboi_amr_msgs/Stststus',
        'st_rl': 'roboi_amr_msgs/Stststus',
        'st_rr': 'roboi_amr_msgs/Stststus',
        'led': 'roboi_amr_msgs/Ledcommand',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['roboi_amr_msgs', 'msg'], 'Stststus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roboi_amr_msgs', 'msg'], 'Stststus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roboi_amr_msgs', 'msg'], 'Stststus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roboi_amr_msgs', 'msg'], 'Stststus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roboi_amr_msgs', 'msg'], 'Ledcommand'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from roboi_amr_msgs.msg import Stststus
        self.st_fl = kwargs.get('st_fl', Stststus())
        from roboi_amr_msgs.msg import Stststus
        self.st_fr = kwargs.get('st_fr', Stststus())
        from roboi_amr_msgs.msg import Stststus
        self.st_rl = kwargs.get('st_rl', Stststus())
        from roboi_amr_msgs.msg import Stststus
        self.st_rr = kwargs.get('st_rr', Stststus())
        from roboi_amr_msgs.msg import Ledcommand
        self.led = kwargs.get('led', Ledcommand())

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
        if self.st_fl != other.st_fl:
            return False
        if self.st_fr != other.st_fr:
            return False
        if self.st_rl != other.st_rl:
            return False
        if self.st_rr != other.st_rr:
            return False
        if self.led != other.led:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def st_fl(self):
        """Message field 'st_fl'."""
        return self._st_fl

    @st_fl.setter
    def st_fl(self, value):
        if __debug__:
            from roboi_amr_msgs.msg import Stststus
            assert \
                isinstance(value, Stststus), \
                "The 'st_fl' field must be a sub message of type 'Stststus'"
        self._st_fl = value

    @builtins.property
    def st_fr(self):
        """Message field 'st_fr'."""
        return self._st_fr

    @st_fr.setter
    def st_fr(self, value):
        if __debug__:
            from roboi_amr_msgs.msg import Stststus
            assert \
                isinstance(value, Stststus), \
                "The 'st_fr' field must be a sub message of type 'Stststus'"
        self._st_fr = value

    @builtins.property
    def st_rl(self):
        """Message field 'st_rl'."""
        return self._st_rl

    @st_rl.setter
    def st_rl(self, value):
        if __debug__:
            from roboi_amr_msgs.msg import Stststus
            assert \
                isinstance(value, Stststus), \
                "The 'st_rl' field must be a sub message of type 'Stststus'"
        self._st_rl = value

    @builtins.property
    def st_rr(self):
        """Message field 'st_rr'."""
        return self._st_rr

    @st_rr.setter
    def st_rr(self, value):
        if __debug__:
            from roboi_amr_msgs.msg import Stststus
            assert \
                isinstance(value, Stststus), \
                "The 'st_rr' field must be a sub message of type 'Stststus'"
        self._st_rr = value

    @builtins.property
    def led(self):
        """Message field 'led'."""
        return self._led

    @led.setter
    def led(self, value):
        if __debug__:
            from roboi_amr_msgs.msg import Ledcommand
            assert \
                isinstance(value, Ledcommand), \
                "The 'led' field must be a sub message of type 'Ledcommand'"
        self._led = value
