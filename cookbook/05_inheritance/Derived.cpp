#include "Derived.h"
#include <iostream>

namespace cookbook {

Derived::Derived() { std::cout << "Derived constructor" << std::endl; }
Derived::~Derived() { std::cout << "Derived desconstructor" << std::endl; }
void Derived::method() { std::cout << "Derived::method" << std::endl; }
void Derived::virtual_method() {
  std::cout << "Derived::virtual_method" << std::endl;
}
void Derived::base_method() {
  std::cout << "Derived::base_method" << std::endl;
  Base::method();
}

} // namespace cookbook