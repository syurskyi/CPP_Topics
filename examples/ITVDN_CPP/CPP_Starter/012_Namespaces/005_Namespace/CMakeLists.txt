cmake_minimum_required(VERSION 3.5)

project(005Namespace)

set(SOURCES
        005Namespace.cpp)

add_executable(005Namespace ${SOURCES})

set_target_properties(005Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)