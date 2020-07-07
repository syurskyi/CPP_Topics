cmake_minimum_required(VERSION 3.5)

project(FirstApp)

set(SOURCES
        001_FirstApp.cpp)

add_executable(001_FirstApp ${SOURCES})

set_target_properties(001_FirstApp PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)