cmake_minimum_required(VERSION 3.12)

project(stl_algorithm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Iterators)

add_executable(a Iterators/Iterators.cpp)
#target_link_libraries(a)