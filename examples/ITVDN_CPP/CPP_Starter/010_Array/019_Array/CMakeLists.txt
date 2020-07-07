cmake_minimum_required(VERSION 3.5)

project(019Array)

set(SOURCES
        019Array.cpp)

add_executable(019Array ${SOURCES})

set_target_properties(019Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)