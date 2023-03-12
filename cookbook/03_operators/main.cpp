#include "IntArray.h"
#include "Integer.h"
#include <iostream>

int main() {
  cookbook::Integer integer1{1};
  cookbook::Integer integer2{2};

  std::cout << integer1 << std::endl;
  std::cout << integer2 << std::endl;

  std::cout << integer1 << " == " << integer2 << " = " << (integer1 == integer2)
            << std::endl;

  std::cout << integer1 << " != " << integer2 << " = " << (integer1 != integer2)
            << std::endl;

  cookbook::Integer integer3 = integer1 + integer2;
  std::cout << integer1 << " + " << integer2 << " = " << integer3 << std::endl;

  std::cout << "before " << integer1 << std::endl
            << "postincrement++ " << integer1++ << std::endl
            << "++preincrement  " << ++integer1 << std::endl
            << "after " << integer1 << std::endl;

  cookbook::IntArray int_array1;
  cookbook::IntArray int_array2;

  std::cout << int_array1 << std::endl;
  std::cout << int_array2 << std::endl;

  int_array1[0] = 1;
  std::cout << "int_array1[0] = " << int_array1[0] << std::endl;
  std::cout << int_array1 << std::endl;

  int_array2[2] = 2;
  std::cout << "int_array2[2] = " << int_array2[2] << std::endl;
  std::cout << int_array2 << std::endl;

  cookbook::IntArray int_array3 = int_array1 + int_array2;
  std::cout << "int_array1 + int_array2 = " << int_array3 << std::endl;

  return 0;
}