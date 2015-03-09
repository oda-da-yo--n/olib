// -*- mode: c++; coding: utf-8-unix -*-

#include <iostream>
#include <string>

#include "client.h"

int main(int argc, char **argv) {
  olib::http::ClientResponse response;

  response.status_code(200).content_length(100);

  return 0;
}
