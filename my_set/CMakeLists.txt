cmake_minimum_required(VERSION 3.22)
project(my_set C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(my_set
        main.c
        set.c
        set.h)
