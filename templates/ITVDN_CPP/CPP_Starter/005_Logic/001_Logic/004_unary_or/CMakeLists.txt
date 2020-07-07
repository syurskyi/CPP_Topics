cmake_minimum_required(VERSION 3.5)

project(004_unary_or)

set(SOURCES
        004_unary_or.cpp)

add_executable(004_unary_or ${SOURCES})

set_target_properties(004_unary_or PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)