cmake_minimum_required(VERSION 3.5)

project(cpp14_3)

add_executable(assert assert.cpp)

add_executable(move move.cpp)

add_executable(literal literal.cpp)

add_executable(using using.cpp)

add_executable(nullptr nullptr.cpp)

add_executable(enum enum.cpp)

add_executable(constexpr constexpr.cpp)

add_executable(class class.cpp)

add_executable(ctor ctor.cpp)

add_executable(brace brace.cpp)

add_executable(for for.cpp)

add_executable(constexpr_ninja constexpr_ninja.cpp)

set_target_properties(assert move literal using nullptr enum constexpr class ctor brace for PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )
