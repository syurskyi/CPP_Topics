cmake_minimum_required(VERSION 3.5)

project(004Error)

set(SOURCES
        004Error.cpp)

add_executable(004Error ${SOURCES})

set_target_properties(004Error PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)