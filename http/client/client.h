// -*- mode: c++; coding: utf-8-unix -*-

#ifndef OLIB_HTTP_CLIENT_CLIENT_H
#define OLIB_HTTP_CLIENT_CLIENT_H

#include <string>

#include "utils/property.h"

namespace olib {
namespace http {

class ClientResponse {
public:
  ClientResponse() :
    status_code_(0),
    content_length_(0) {}
  virtual ~ClientResponse() {}

  OLIB_USE_PROPERTY(ClientResponse);
  OLIB_RW_PROPERTY(int, status_code);
  OLIB_RW_PROPERTY(size_t, content_length);
  OLIB_RW_PROPERTY_REF(std::string, content_type);
  OLIB_RW_PROPERTY_REF(std::string, raw_content);
};

namespace detail {
struct KV {
  KV() {}
  KV(const std::string& k, const std::string& v):
    key(k), value(v) {}
  template<typename T>
  KV(const std::string& k, const T& v):
    KV(k, std::to_string(v)) {}

  std::string key;
  std::string value;
};
} // namespace detail

class Client {
public:
  ClientResponse* get(const std::string& url, 
                      const std::initializer_list<detail::KV> &params );
  ClientResponse* put(const std::string& url, 
                      const std::initializer_list<detail::KV> &params );
};


} // namespace http
} // namespace olib

#endif // OLIB_HTTP_CLIENT_CLIENT_H
