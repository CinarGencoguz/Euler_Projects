cmake_minimum_required(VERSION 3.15)
project(EulerProjects CXX)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories for shared headers (e.g., MathUtils.hpp)
include_directories(include)

# Automatically find all C++ source files in the src/ directory
file(GLOB SOLUTIONS "src/*.cpp")

# Iterate through each source file and generate an independent executable
foreach(solution_file ${SOLUTIONS})
    get_filename_component(solution_name ${solution_file} NAME_WE)
    add_executable(${solution_name} ${solution_file})
endforeach()