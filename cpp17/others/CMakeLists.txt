cmake_minimum_required(VERSION 3.12)

message("generator is set to ${CMAKE_GENERATOR}")

project(learndp VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(code1 main.cpp Base.cpp Derived.cpp)
