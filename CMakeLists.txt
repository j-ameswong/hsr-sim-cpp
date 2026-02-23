cmake_minimum_required(VERSION 3.16)
project(avcalc_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(avcalc_cpp
    src/main.cpp
    src/character.cpp
    src/turn.cpp
    src/sim.cpp
)

target_include_directories(avcalc_cpp PRIVATE src)
