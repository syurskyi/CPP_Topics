cmake_minimum_required(VERSION 3.5)

project(011Namespace)

set(SOURCES
        011Namespace.cpp)

add_executable(011Namespace ${SOURCES})

set_target_properties(011Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)