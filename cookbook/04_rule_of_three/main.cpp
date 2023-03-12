#include "DynamicIntArray.h"
#include <iostream>

int main() {
  cookbook::DynamicIntArray int_array1{5};
  cookbook::DynamicIntArray int_array2 = int_array1; // copy constructor

  std::cout << "int_array1: " << int_array1 << std::endl;
  std::cout << "int_array2: " << int_array2 << std::endl;
  std::cout << "int_array1 == int_array2 " << (int_array1 == int_array2)
            << std::endl;

  int_array1[2] = 9;

  std::cout << "int_array1: " << int_array1 << std::endl;
  std::cout << "int_array2: " << int_array2 << std::endl;
  std::cout << "int_array1 == int_array2 " << (int_array1 == int_array2)
            << std::endl;

  cookbook::DynamicIntArray int_array3{3};

  std::cout << "int_array3: " << int_array3 << std::endl;
  int_array3 = int_array1; // assigment operator
  int_array1[4] = 7;
  std::cout << "int_array1: " << int_array1 << std::endl;
  std::cout << "int_array3: " << int_array3 << std::endl;

  return 0;
}