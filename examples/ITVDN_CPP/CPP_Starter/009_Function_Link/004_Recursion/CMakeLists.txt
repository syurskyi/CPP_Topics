cmake_minimum_required(VERSION 3.5)

project(004Recursion)

set(SOURCES
        004Recursion.cpp)

add_executable(004Recursion ${SOURCES})

set_target_properties(004Recursion PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)