cmake_minimum_required(VERSION 3.22)
project(oop C)

set(CMAKE_C_STANDARD 99)

add_executable(oop main.c src include main.h)
include_directories(include)