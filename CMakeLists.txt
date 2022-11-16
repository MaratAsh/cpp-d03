cmake_minimum_required(VERSION 3.21)
project(cpp_03)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_03_00
        ex00/srcs/main.cpp
        ex00/srcs/ClapTrap.cpp
        ex00/includes/ClapTrap.hpp)
target_include_directories(cpp_03_00 PRIVATE ex00/includes/)
