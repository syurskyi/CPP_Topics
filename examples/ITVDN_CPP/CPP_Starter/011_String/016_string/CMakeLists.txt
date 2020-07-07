cmake_minimum_required(VERSION 3.5)

project(016string)

set(SOURCES
        016string.cpp)

add_executable(016string ${SOURCES})

set_target_properties(016string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)