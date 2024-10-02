
#include <raylib.h>

#include "imgui.h"
#include "rlImGui.h"

#include "Application.h"
#include "uni.h"

void Application::Run()
{
	const int width = 900;
	const int height = 800;

	InitWindow(width, height, "UNI-ENGINE");
	SetWindowState(FLAG_WINDOW_RESIZABLE);

	Image icon = LoadImage("./assets/icon.png");
	SetWindowIcon(icon);
	UnloadImage(icon);

	rlImGuiSetup(true);

	while (!WindowShouldClose())
	{
#pragma region RAY_RENDERER
		BeginDrawing();
		ClearBackground(BLACK);
#pragma endregion

#pragma region IMGUI_RENDERER
		rlImGuiBegin();
		UNI_UI::ToolBarMenu();
		rlImGuiEnd();
#pragma endregion


		EndDrawing();
	}
	CloseWindow();
}
