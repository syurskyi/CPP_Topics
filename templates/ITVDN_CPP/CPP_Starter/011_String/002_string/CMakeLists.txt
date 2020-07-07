cmake_minimum_required(VERSION 3.5)

project(002string)

set(SOURCES
        002string.cpp)

add_executable(002string ${SOURCES})

set_target_properties(002string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)