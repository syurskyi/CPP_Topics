cmake_minimum_required(VERSION 3.5)

project(007Link)

set(SOURCES
        007Link.cpp)

add_executable(007Link ${SOURCES})

set_target_properties(007Link PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)