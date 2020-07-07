cmake_minimum_required(VERSION 3.5)

project(011Link)

set(SOURCES
        011Link.cpp)

add_executable(011Link ${SOURCES})

set_target_properties(011Link PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)