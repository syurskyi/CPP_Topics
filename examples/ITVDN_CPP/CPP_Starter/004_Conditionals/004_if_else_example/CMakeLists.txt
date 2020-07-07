cmake_minimum_required(VERSION 3.5)

project(004_if_else_example)

set(SOURCES
        004_if_else_example.cpp)

add_executable(004_if_else_example ${SOURCES})

set_target_properties(004_if_else_example PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)