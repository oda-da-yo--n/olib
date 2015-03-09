// -*- mode: c++; coding: utf-8-unix -*-

#ifndef OLIB_UTILS_PROPERTY_H
#define OLIB_UTILS_PROPERTY_H

#define OLIB_USE_PROPERTY(cls) \
  private: \
  using self_type_ = cls

#define OLIB_RW_PROPERTY(type, name) \
public:                        \
 type name() const { return name ## _; } \
 self_type_& name(const type v) { name ## _ = v; return *this; } \
protected:                   \
  type name ## _

#define OLIB_RW_PROPERTY_REF(type, name) \
public:                        \
 const type &name() const { return name ## _; } \
 self_type_& name(const type &v) { name ## _ = v; return *this;}        \
protected:                   \
  type name ## _

#define OLIB_PROPERTY(type, name) \
public:                        \
 type name() const { return name ## _; } \
protected:                   \
  type name ## _

#define OLIB_PROPERTY_REF(type, name) \
public:                        \
 const type &name() const { return name ## _; } \
protected:                   \
  type name ## _
 
#endif // OLIB_UTILS_PROPERTY_H

