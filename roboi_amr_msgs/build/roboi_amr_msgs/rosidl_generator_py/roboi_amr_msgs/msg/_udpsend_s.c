// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roboi_amr_msgs:msg/Udpsend.idl
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
#include "roboi_amr_msgs/msg/detail/udpsend__struct.h"
#include "roboi_amr_msgs/msg/detail/udpsend__functions.h"

bool roboi_amr_msgs__msg__stststus__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * roboi_amr_msgs__msg__stststus__convert_to_py(void * raw_ros_message);
bool roboi_amr_msgs__msg__stststus__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * roboi_amr_msgs__msg__stststus__convert_to_py(void * raw_ros_message);
bool roboi_amr_msgs__msg__stststus__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * roboi_amr_msgs__msg__stststus__convert_to_py(void * raw_ros_message);
bool roboi_amr_msgs__msg__stststus__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * roboi_amr_msgs__msg__stststus__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool roboi_amr_msgs__msg__udpsend__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("roboi_amr_msgs.msg._udpsend.Udpsend", full_classname_dest, 35) == 0);
  }
  roboi_amr_msgs__msg__Udpsend * ros_message = _ros_message;
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // isindicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "isindicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->isindicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // st_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "st_fl");
    if (!field) {
      return false;
    }
    if (!roboi_amr_msgs__msg__stststus__convert_from_py(field, &ros_message->st_fl)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // st_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "st_fr");
    if (!field) {
      return false;
    }
    if (!roboi_amr_msgs__msg__stststus__convert_from_py(field, &ros_message->st_fr)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // st_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "st_rl");
    if (!field) {
      return false;
    }
    if (!roboi_amr_msgs__msg__stststus__convert_from_py(field, &ros_message->st_rl)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // st_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "st_rr");
    if (!field) {
      return false;
    }
    if (!roboi_amr_msgs__msg__stststus__convert_from_py(field, &ros_message->st_rr)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roboi_amr_msgs__msg__udpsend__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Udpsend */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roboi_amr_msgs.msg._udpsend");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Udpsend");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roboi_amr_msgs__msg__Udpsend * ros_message = (roboi_amr_msgs__msg__Udpsend *)raw_ros_message;
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isindicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->isindicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isindicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // st_fl
    PyObject * field = NULL;
    field = roboi_amr_msgs__msg__stststus__convert_to_py(&ros_message->st_fl);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "st_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // st_fr
    PyObject * field = NULL;
    field = roboi_amr_msgs__msg__stststus__convert_to_py(&ros_message->st_fr);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "st_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // st_rl
    PyObject * field = NULL;
    field = roboi_amr_msgs__msg__stststus__convert_to_py(&ros_message->st_rl);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "st_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // st_rr
    PyObject * field = NULL;
    field = roboi_amr_msgs__msg__stststus__convert_to_py(&ros_message->st_rr);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "st_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
