#include "utils.h"
#include <iostream>

int main() {
  assert(numeros_divisibles_por_k(1, 3, 2) == 1);
  assert(numeros_divisibles_por_k(1, 4, 3) == 1);

  std::cout << "numeros divisibles por k " << numeros_divisibles_por_k(5, 8, 2)
            << std::endl;

  return 0;
}
