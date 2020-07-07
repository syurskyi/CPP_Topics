cmake_minimum_required(VERSION 3.5)

project(005string)

set(SOURCES
        005string.cpp)

add_executable(005string ${SOURCES})

set_target_properties(005string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)