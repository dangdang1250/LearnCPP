cmake_minimum_required(VERSION 3.10)

# project name and language
project(cppprime5)
cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# library
# add_library(sum_integers sum_integers.cpp)

# main code
# add_subdirectory(Ch01)
add_executable(code1 return_lvalue.cpp)
# target_link_libraries(sum_up sum_integers)

# test binary
# add_executable(cpp_test test.cpp)
# target_link_libraries(cpp_test sum_integers)

# enable_testing()

# add_test(
#     NAME catch_test
#     COMMAND $<TARGET_FILE:cpp_test> --success
# )