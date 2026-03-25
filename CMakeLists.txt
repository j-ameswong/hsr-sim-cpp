cmake_minimum_required(VERSION 3.16)
project(hsr_sim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hsr_sim
    src/main.cpp
    src/Simulator.cpp
    src/CLISimIO.cpp
)

target_include_directories(hsr_sim PRIVATE include)
target_compile_options(hsr_sim PRIVATE -Wall -Wextra -Wpedantic)
