cmake_minimum_required(VERSION 3.12)

set(CMAKE_GENERATOR "Unix Makefiles")
set (CMAKE_CXX_STANDARD 17)

message("generator is set to ${CMAKE_GENERATOR}")

project(code1 VERSION 0.0.1)
project(code1 LANGUAGES CXX)
# add_executable(code1 functions_on_the_run.cpp)
# add_executable(code1 std_function.cpp)
# add_executable(code1 concatenation.cpp)
# add_executable(code1 combine.cpp)
# add_executable(code1 transform_if.cpp)
add_executable(code1 cartesian_product.cpp)
