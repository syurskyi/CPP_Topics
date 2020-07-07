cmake_minimum_required(VERSION 3.5)

project(005_FloatDouble)

set(SOURCES
        005_FloatDouble)

add_executable(005_FloatDouble ${SOURCES})

set_target_properties(005_FloatDouble.cpp PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)