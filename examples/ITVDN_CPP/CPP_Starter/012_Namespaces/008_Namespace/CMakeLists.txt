cmake_minimum_required(VERSION 3.5)

project(008Namespace)

set(SOURCES
        008Namespace.cpp)

add_executable(008Namespace ${SOURCES})

set_target_properties(008Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)