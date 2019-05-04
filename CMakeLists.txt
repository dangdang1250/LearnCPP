cmake_minimum_required(VERSION 3.12)

set(CMAKE_GENERATOR "Unix Makefiles")
set (CMAKE_CXX_STANDARD 11)

message("generator is set to ${CMAKE_GENERATOR}")

project(scope_time VERSION 0.0.1)
project(scope_time LANGUAGES CXX)
add_executable(a main.cpp solution.cpp)
