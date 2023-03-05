#include "mymath.h"
#include <cassert>
#include <iostream>

int main() {
  assert(mymath::sum(1, 2) == 3);
  assert(mymath::sum(3, 4) == 7);
  assert(mymath::sum(5, 6) == 11);

  std::cout << "assert tests passed" << std::endl;

  return EXIT_SUCCESS;
}