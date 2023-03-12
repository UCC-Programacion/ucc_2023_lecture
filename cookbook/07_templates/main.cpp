#include "Array.h"
#include "Array5.h"
#include <iostream>

int main() {
  cookbook::Array5<int> int_array5;
  for (int i = 0; i < 5; ++i) {
    int_array5[i] = i;
  }
  std::cout << "int_array5: " << int_array5 << std::endl;

  cookbook::Array5<float> float_array5;
  std::cout << "float_array5: " << float_array5 << std::endl;

  cookbook::Array5<bool> bool_array5;
  std::cout << "bool_array5: " << bool_array5 << std::endl;

  cookbook::Array<int, 7> int_array;
  std::cout << "int_array: " << int_array << std::endl;

  cookbook::Array<float, 3> float_array;
  std::cout << "float_array: " << float_array << std::endl;

  cookbook::Array<bool, 10> bool_array;
  std::cout << "bool_array: " << bool_array << std::endl;

  return 0;
}