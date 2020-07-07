cmake_minimum_required(VERSION 3.5)

project(011Operation)

set(SOURCES
        011Operation.cpp)

add_executable(011Operation ${SOURCES})

set_target_properties(011Operation PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)