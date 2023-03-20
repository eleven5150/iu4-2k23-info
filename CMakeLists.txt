cmake_minimum_required(VERSION 3.22)
project(iu4-2k23-info C)

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

add_executable(typecasting
        sem02/typecasting/main.c)

add_executable(arguments
        sem03/arguments/main.c)

add_executable(array_matrices
        sem03/array_matrices/main.c)

add_executable(strings
        sem03/strings/main.c)

add_executable(factorial_recursion
        sem04/factorial_recursion/main.c)

add_executable(enum_directions
        sem04/enum_directions/main.c)

add_executable(headers_structs_preprocessordirectives
        sem04/headers_structs_preprocessordirectives/src/main.c
        sem04/headers_structs_preprocessordirectives/src/util.c
        )

add_executable(global_n_local_variables
        sem04/global_n_local_variables/main.c
        )

target_include_directories(headers_structs_preprocessordirectives
        PRIVATE sem04/headers_structs_preprocessordirectives/inc
        )

add_executable(pointers
        sem05/pointers/main.c)

add_executable(function_pointers
        sem05/function_pointers/main.c)

add_executable(heap
        sem05/heap/main.c)