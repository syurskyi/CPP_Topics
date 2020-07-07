cmake_minimum_required(VERSION 3.5)

project(004_Functions)

set(SOURCES
        004_Functions.cpp)

add_executable(004_Functions ${SOURCES})

set_target_properties(004_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)