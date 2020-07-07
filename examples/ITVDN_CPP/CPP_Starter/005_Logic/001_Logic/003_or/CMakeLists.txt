cmake_minimum_required(VERSION 3.5)

project(003_or)

set(SOURCES
        003_or.cpp)

add_executable(003_or ${SOURCES})

set_target_properties(003_or PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)