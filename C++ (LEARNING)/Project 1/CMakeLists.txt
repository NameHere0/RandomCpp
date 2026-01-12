cmake_minimum_required(VERSION 3.20)

project(LearnCppWorkspace LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4 /Zi)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -g)
endif()

# AUTOMATIC: find all .cpp files in the current folder
file(GLOB SOURCES "*.cpp")

# Create a single executable called "main" (or change the name)
add_executable(main ${SOURCES})

# Include current folder for headers
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "Compiling all .cpp files in ${CMAKE_CURRENT_SOURCE_DIR} into 'main'")
