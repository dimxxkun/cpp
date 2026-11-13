cmake_minimum_required(VERSION 3.15)
project(cpp_quickstart VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)

add_executable(cpp_quickstart
    src/main.cpp
    src/math_utils.cpp
)

if (MSVC)
    target_compile_options(cpp_quickstart PRIVATE /W4)
else()
    target_compile_options(cpp_quickstart PRIVATE -Wall -Wextra -pedantic)
endif()
