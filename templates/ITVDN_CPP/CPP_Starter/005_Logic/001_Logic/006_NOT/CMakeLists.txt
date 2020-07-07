cmake_minimum_required(VERSION 3.5)

project(006_NOT)

set(SOURCES
        006_NOT.cpp)

add_executable(006_NOT ${SOURCES})

set_target_properties(006_NOT PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)