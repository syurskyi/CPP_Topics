cmake_minimum_required(VERSION 3.5)

project(002_Define)

set(SOURCES
        002_Define.cpp)

add_executable(002_Define ${SOURCES})

set_target_properties(002_Define PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)