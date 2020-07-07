cmake_minimum_required(VERSION 3.5)

project(004Array)

set(SOURCES
        004Array.cpp)

add_executable(004Array ${SOURCES})

set_target_properties(004Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)