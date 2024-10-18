cmake_minimum_required(VERSION 3.28)
project(cpp_raylib_template)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

add_subdirectory(external/imgui-docking)
add_subdirectory(external/raylib)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_raylib_template src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC raylib raylib_cpp imgui rlimgui)
