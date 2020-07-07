cmake_minimum_required(VERSION 3.5)

project(015)

set(SOURCES
        015.cpp)

add_executable(015 ${SOURCES})

set_target_properties(015 PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)