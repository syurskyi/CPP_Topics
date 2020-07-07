cmake_minimum_required(VERSION 3.5)

project(007string)

set(SOURCES
        007string.cpp)

add_executable(007string ${SOURCES})

set_target_properties(007string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)