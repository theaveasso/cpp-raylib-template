#include <raylib-cpp.hpp>
#include <imgui.h>
#include <rlImGui.h>

int main() {
    raylib::Window window{640, 480, "Boring Canvas"};
    rlImGuiSetup(true);

    while (!window.ShouldClose()) {
        window.ClearBackground(GREEN);
        BeginDrawing();
        {
            DrawFPS(10, 10);
            rlImGuiBegin();
            ImGui::ShowDemoWindow();
            rlImGuiEnd();
        }
        EndDrawing();

    }

    return 0;
}