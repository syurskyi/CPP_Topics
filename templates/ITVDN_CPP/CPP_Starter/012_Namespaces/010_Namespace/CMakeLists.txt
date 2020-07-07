cmake_minimum_required(VERSION 3.5)

project(010Namespace)

set(SOURCES
        010Namespace.cpp)

add_executable(010Namespace ${SOURCES})

set_target_properties(010Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)