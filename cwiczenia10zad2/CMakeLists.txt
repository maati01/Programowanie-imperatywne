cmake_minimum_required(VERSION 3.17)
project(cwiczenia10zad2 C)

set(CMAKE_C_STANDARD 99)
set(gcc -std=gnu11 -O2 -Wall -Wconversion -Werror -o pair pair.c -lm)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall")

add_executable(cwiczenia10zad2 main.c)