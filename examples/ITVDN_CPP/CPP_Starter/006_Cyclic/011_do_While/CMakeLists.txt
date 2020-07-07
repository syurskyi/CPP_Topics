cmake_minimum_required(VERSION 3.5)

project(011_do_While)

set(SOURCES
        011_do_While.cpp)

add_executable(011_do_While ${SOURCES})

set_target_properties(011_do_While PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)