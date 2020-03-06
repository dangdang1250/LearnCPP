cmake_minimum_required(VERSION 3.15)

set(CMAKE_GENERATOR "Unix Makefiles")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message("generator is set to ${CMAKE_GENERATOR}")

project(StateMachine VERSION 0.0.1)
project(StateMachine LANGUAGES CXX)

find_package( Boost 1.65 COMPONENTS program_options REQUIRED )
include_directories( ${Boost_INCLUDE_DIR} )

add_subdirectory(src)



