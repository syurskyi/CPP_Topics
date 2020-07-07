cmake_minimum_required(VERSION 3.9)
project(async)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp event.h loop.h handler.h)
add_executable(condition_variable condition_variable.cpp)
add_executable(callback callback.cpp)
