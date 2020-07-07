cmake_minimum_required(VERSION 3.5)

project(015function)

set(SOURCES
        015function.cpp)

add_executable(015function ${SOURCES})

set_target_properties(015function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)