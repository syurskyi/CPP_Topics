cmake_minimum_required(VERSION 3.5)

project(003_Namespace)

set(SOURCES
        003_Namespace.cpp)

add_executable(003_Namespace ${SOURCES})

set_target_properties(003_Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)