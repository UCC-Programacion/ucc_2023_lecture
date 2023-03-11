#include "Base.h"
#include <iostream>

namespace cookbook {

Base::Base() { std::cout << "Base constructor" << std::endl; }
Base::~Base() { std::cout << "Base desconstructor" << std::endl; }
void Base::method() { std::cout << "Base::method" << std::endl; }
void Base::virtual_method() {
  std::cout << "Base::virtual_method" << std::endl;
}

} // namespace cookbook