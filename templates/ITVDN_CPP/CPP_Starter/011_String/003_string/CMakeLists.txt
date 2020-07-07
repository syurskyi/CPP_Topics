cmake_minimum_required(VERSION 3.5)

project(003string)

set(SOURCES
        003string.cpp)

add_executable(003string ${SOURCES})

set_target_properties(003string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)