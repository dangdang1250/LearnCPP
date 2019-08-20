cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(a main.cpp)

# g++ -Wall -g -std=c++0x -pthread main.cpp
target_link_libraries(a pthread)