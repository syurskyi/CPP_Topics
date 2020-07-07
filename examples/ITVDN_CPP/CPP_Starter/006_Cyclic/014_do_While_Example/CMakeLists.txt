cmake_minimum_required(VERSION 3.5)

project(014_do_While_Example)

set(SOURCES
        014_do_While_Example.cpp)

add_executable(014_do_While_Example ${SOURCES})

set_target_properties(014_do_While_Example PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)