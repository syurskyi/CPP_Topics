cmake_minimum_required(VERSION 3.5)

project(004_For)

set(SOURCES
        004_For.cpp)

add_executable(004_For ${SOURCES})

set_target_properties(004_For PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)