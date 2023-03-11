#include "Derived.h"
#include <iostream>

int main() {

  std::cout << "> block start" << std::endl;
  {
    cookbook::Derived d;
    std::cout << "> cookbook::Base &b = d;" << std::endl;
    cookbook::Base &b = d;
    std::cout << "> b.method()" << std::endl;
    b.method(); // note: non-virtual Base::method invoked
    std::cout << "> b.virtual_method()" << std::endl;
    b.virtual_method(); // note: virtual Derived::virtual_method invoked
    std::cout << "> d.base_method()" << std::endl;
    d.base_method();
  }
  std::cout << "> block end" << std::endl;

  return 0;
}