cmake_minimum_required(VERSION 3.5)

project(006_For_in_For)

set(SOURCES
        006_For_in_For.cpp)

add_executable(006_For_in_For ${SOURCES})

set_target_properties(006_For_in_For PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)