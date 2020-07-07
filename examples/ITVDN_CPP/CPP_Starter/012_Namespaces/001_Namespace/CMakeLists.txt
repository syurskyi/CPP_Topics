cmake_minimum_required(VERSION 3.5)

project(001Namespace)

set(SOURCES
        001Namespace.cpp)

add_executable(001Namespace ${SOURCES})

set_target_properties(001Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)