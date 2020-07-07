cmake_minimum_required(VERSION 3.5)

project(010_CastingExpression)

set(SOURCES
        010_CastingExpression.cpp)

add_executable(010_CastingExpression ${SOURCES})

set_target_properties(010_CastingExpression PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)