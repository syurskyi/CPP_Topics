cmake_minimum_required(VERSION 3.5)

project(cpp17_1)

add_executable(attributes attributes.cpp)
add_executable(auto_template auto_template.cpp)
add_executable(deduction deduction.cpp)
add_executable(lambda lambda.cpp)
add_executable(noexcept noexcept.cpp)
add_executable(static_assert static_assert.cpp)
add_executable(trigraph trigraph.cpp)

set_target_properties(attributes auto_template deduction lambda noexcept static_assert PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )


set_target_properties(trigraph PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )
