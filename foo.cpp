#include "foo.hpp"

#include <iostream>

foo::foo(std::string x) 
    : str_(x) {
  // nop  
}

void foo::print() const {
  std::cout << "foo: " << str_ << std::endl;
}
