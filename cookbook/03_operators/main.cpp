#include "IntList.h"
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

  cookbook::IntList int_list1;
  cookbook::IntList int_list2;

  std::cout << int_list1 << std::endl;
  std::cout << int_list2 << std::endl;

  int_list1[0] = 1;
  std::cout << "int_list1[0] = " << int_list1[0] << std::endl;
  std::cout << int_list1 << std::endl;

  int_list2[2] = 2;
  std::cout << "int_list2[2] = " << int_list2[2] << std::endl;
  std::cout << int_list2 << std::endl;

  cookbook::IntList int_list3 = int_list1 + int_list2;
  std::cout << "int_list1 + int_list2 = " << int_list3 << std::endl;

  return 0;
}