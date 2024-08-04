cmake_minimum_required(VERSION 3.28)
project(cpp_raylib_template)

add_subdirectory(external/raylib)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_raylib_template main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)