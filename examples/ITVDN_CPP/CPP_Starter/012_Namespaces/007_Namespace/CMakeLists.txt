cmake_minimum_required(VERSION 3.5)

project(007Namespace)

set(SOURCES
        007Namespace.cpp)

add_executable(007Namespace ${SOURCES})

set_target_properties(007Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)