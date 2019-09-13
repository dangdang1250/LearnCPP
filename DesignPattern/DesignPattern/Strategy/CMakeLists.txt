cmake_minimum_required(VERSION 3.12)

project(learndp VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_subdirectory(libstrategy)
add_subdirectory(libconnstrategy)
add_executable(code1 main.cpp)
target_link_libraries(code1 connstrategy)
enable_testing()
