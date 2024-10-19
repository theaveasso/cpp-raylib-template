project(imgui-docking)

# imgui
find_package(imgui QUIET)
if (NOT imgui_FOUND)
    FetchContent_Declare(
            imgui
            GIT_REPOSITORY https://github.com/ocornut/imgui.git
            GIT_TAG docking
    )
    FetchContent_MakeAvailable(imgui)
    add_library(
            imgui STATIC
            ${imgui_SOURCE_DIR}/imgui.cpp
            ${imgui_SOURCE_DIR}/imgui_draw.cpp
            ${imgui_SOURCE_DIR}/imgui_demo.cpp
            ${imgui_SOURCE_DIR}/imgui_widgets.cpp
            ${imgui_SOURCE_DIR}/imgui_tables.cpp
    )
    # Set it's include directory
    target_include_directories(imgui INTERFACE ${imgui_SOURCE_DIR})
endif()

# rlimgui
find_package(rlimgui QUIET)
if (NOT rlimgui_FOUND)
    FetchContent_Declare(
            rlImGui
            GIT_REPOSITORY https://github.com/raylib-extras/rlImGui
            GIT_TAG main
    )
    FetchContent_MakeAvailable(rlImGui)
    # For libraries not compiled with CMake, it's necessary to manually add the source files and set the include directory
    add_library(rlimgui STATIC ${rlimgui_SOURCE_DIR}/rlImGui.cpp)
    target_include_directories(rlimgui INTERFACE ${rlimgui_SOURCE_DIR})
    # Tells the compiler that one library depends on other
    target_link_libraries(rlimgui PRIVATE imgui raylib)
endif()