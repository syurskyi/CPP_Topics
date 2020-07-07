cmake_minimum_required(VERSION 3.5)

project(009Namespace)

set(SOURCES
        009Namespace.cpp)

add_executable(009Namespace ${SOURCES})

set_target_properties(009Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)