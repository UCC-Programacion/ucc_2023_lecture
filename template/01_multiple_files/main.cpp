#include "mymath.h"
#include <iostream>

int main() {
  std::cout << "sum(1,2) = " << mymath::sum(1, 2) << std::endl;
  std::cout << "sum(3,4) = " << mymath::sum(3, 4) << std::endl;
  std::cout << "sum(5,6) = " << mymath::sum(5, 6) << std::endl;

  return EXIT_SUCCESS;
}