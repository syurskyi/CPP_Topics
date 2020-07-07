cmake_minimum_required(VERSION 3.5)

project(004Namespace)

set(SOURCES
        004Namespace.cpp)

add_executable(004Namespace ${SOURCES})

set_target_properties(004Namespace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)