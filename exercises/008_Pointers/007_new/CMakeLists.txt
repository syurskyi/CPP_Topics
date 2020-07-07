cmake_minimum_required(VERSION 3.5)

project(007new)

set(SOURCES
        007new.cpp)

add_executable(007new ${SOURCES})

set_target_properties(007new PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)