#include <imgui.h>
#include <raylib-cpp.hpp>
#include <rlImGui.h>

int main() {
	raylib::Window window(640, 480, "raylib");
	rlImGuiSetup(true);

	while (!window.ShouldClose()) {
		BeginDrawing(); {
			window.ClearBackground(WHITE);
			DrawFPS(10, 10);
		}
		rlImGuiBegin();
		ImGui::Begin("Hello world");
		ImGui::ShowDemoWindow();
		ImGui::End();
		rlImGuiEnd();
		EndDrawing();
	}
	return 0;
}
