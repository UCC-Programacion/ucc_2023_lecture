cmake_minimum_required(VERSION 3.24)
project(ucc_2023)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(cmake)

add_subdirectory(template)

add_subdirectory(u1)
add_subdirectory(u2)
add_subdirectory(u3)
add_subdirectory(u4)
add_subdirectory(u5)
