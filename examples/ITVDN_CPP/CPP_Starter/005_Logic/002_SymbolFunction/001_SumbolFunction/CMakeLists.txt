cmake_minimum_required(VERSION 3.5)

project(001_SumbolFunction)

set(SOURCES
        001_SumbolFunction.cpp)

add_executable(001_SumbolFunction ${SOURCES})

set_target_properties(001_SumbolFunction PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)