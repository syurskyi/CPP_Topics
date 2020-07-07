cmake_minimum_required(VERSION 3.5)

project(007_while)

set(SOURCES
        007_while.cpp)

add_executable(007_while ${SOURCES})

set_target_properties(007_while PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)