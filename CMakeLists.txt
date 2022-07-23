cmake_minimum_required(VERSION 3.22)
project(CLangThreadTest C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CLangThreadTest
        main.c)
