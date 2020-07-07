cmake_minimum_required(VERSION 3.5)

project(cpp17_2)

add_executable(fold fold.cpp)
set_target_properties(fold PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(filesystem filesystem.cpp)
set_target_properties(filesystem PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(constexpr_if constexpr_if.cpp)
set_target_properties(constexpr_if PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(inline inline.cpp)
set_target_properties(inline PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(initializers initializers.cpp)
set_target_properties(initializers PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(structured_bindings structured_bindings.cpp)
set_target_properties(structured_bindings PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(sv sv.cpp)
set_target_properties(sv PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(evaluation_order evaluation_order.cpp)
set_target_properties(evaluation_order PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(bind bind.cpp)
set_target_properties(bind PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
