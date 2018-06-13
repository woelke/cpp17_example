#pragma once

#include <string>

class foo {
public:
  foo(std::string);

  void print() const;

private:
  std::string str_;
};
