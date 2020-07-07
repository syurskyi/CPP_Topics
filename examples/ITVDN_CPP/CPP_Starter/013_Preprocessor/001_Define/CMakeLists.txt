cmake_minimum_required(VERSION 3.5)

project(001_Define)

set(SOURCES
        001_Define.cpp)

add_executable(001_Define ${SOURCES})

set_target_properties(001_Define PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)