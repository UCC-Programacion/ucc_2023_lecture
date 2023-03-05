#include "mymath.h"
#include <iostream>

int main() {
  int a;
  int b;

  std::cout << "enter a: ";
  std::cin >> a;

  std::cout << "enter b: ";
  std::cin >> b;

  std::cout << "sum(a,b) = " << mymath::sum(a, b) << std::endl;

  return EXIT_SUCCESS;
}