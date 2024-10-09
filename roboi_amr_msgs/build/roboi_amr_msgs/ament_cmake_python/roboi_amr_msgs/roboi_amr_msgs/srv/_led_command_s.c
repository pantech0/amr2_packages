// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "roboi_amr_msgs/srv/detail/led_command__struct.h"
#include "roboi_amr_msgs/srv/detail/led_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roboi_amr_msgs__srv__led_command__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("roboi_amr_msgs.srv._led_command.LedCommand_Request", full_classname_dest, 50) == 0);
  }
  roboi_amr_msgs__srv__LedCommand_Request * ros_message = _ros_message;
  {  // command_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_fl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_fr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_rl1
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_rl1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_rl1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_rl2
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_rl2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_rl2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_rl3
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_rl3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_rl3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_rr1
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_rr1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_rr1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_rr2
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_rr2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_rr2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_rr3
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_rr3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_rr3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roboi_amr_msgs__srv__led_command__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LedCommand_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roboi_amr_msgs.srv._led_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LedCommand_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roboi_amr_msgs__srv__LedCommand_Request * ros_message = (roboi_amr_msgs__srv__LedCommand_Request *)raw_ros_message;
  {  // command_fl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_fr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_rl1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_rl1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_rl1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_rl2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_rl2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_rl2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_rl3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_rl3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_rl3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_rr1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_rr1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_rr1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_rr2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_rr2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_rr2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_rr3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_rr3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_rr3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "roboi_amr_msgs/srv/detail/led_command__struct.h"
// already included above
// #include "roboi_amr_msgs/srv/detail/led_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roboi_amr_msgs__srv__led_command__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("roboi_amr_msgs.srv._led_command.LedCommand_Response", full_classname_dest, 51) == 0);
  }
  roboi_amr_msgs__srv__LedCommand_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roboi_amr_msgs__srv__led_command__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LedCommand_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roboi_amr_msgs.srv._led_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LedCommand_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roboi_amr_msgs__srv__LedCommand_Response * ros_message = (roboi_amr_msgs__srv__LedCommand_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
