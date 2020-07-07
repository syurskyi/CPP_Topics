cmake_minimum_required(VERSION 3.5)

project(002Namespace)

set(SOURCES
        002Namespace.cpp)

add_executable(002Namespace ${SOURCES})

set_target_properties(002Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)