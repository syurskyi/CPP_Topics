cmake_minimum_required(VERSION 3.5)

project(005Array)

set(SOURCES
        005Array.cpp)

add_executable(005Array ${SOURCES})

set_target_properties(005Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)