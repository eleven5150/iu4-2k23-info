cmake_minimum_required(VERSION 3.22)
project(sem01 C)

set(CMAKE_C_STANDARD 11)

add_executable(sem01
        sem01/main.c)

add_executable(sign_of_numbers
        sem02/sign_of_number/main.c)

add_executable(functions
        sem02/functions/main.c)

add_executable(switch_case
        sem02/switch_case/main.c)

add_executable(while_loop
        sem02/while_loop/main.c)

add_executable(for_loop
        sem02/for_loop/main.c)
