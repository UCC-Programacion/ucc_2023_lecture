#include "mymath.h"
#include <iostream>

int main() {
  int a;
  int b;

  std::cout << "ingrese a: ";
  std::cin >> a;

  std::cout << "ingrese b: ";
  std::cin >> b;

  std::cout << a << " + " << b << " = " << mymath::sum(a, b) << std::endl;

  return EXIT_SUCCESS;
}