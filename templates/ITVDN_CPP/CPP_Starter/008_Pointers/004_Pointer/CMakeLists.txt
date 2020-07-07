cmake_minimum_required(VERSION 3.5)

project(004Pointer)

set(SOURCES
        004Pointer.cpp)

add_executable(004Pointer ${SOURCES})

set_target_properties(004Pointer PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)