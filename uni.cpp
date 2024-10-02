#include <raylib.h>
#include "uni.h"

#include "imgui.h"

void UNI_UI::ToolBarMenu()
{
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("File"))
        {
            if (ImGui::MenuItem("New Project"))
            {
                
            }
            if (ImGui::MenuItem("Open Project"))
            {
                
            }
            if (ImGui::MenuItem("Save"))
            {

            }
            if (ImGui::MenuItem("Save As"))
            {

            }

            ImGui::EndMenu();
        }

        if (ImGui::BeginMenu("Edit"))
        {
            ImGui::EndMenu();
        }

        if (ImGui::BeginMenu("Windows"))
        {
            if (ImGui::MenuItem("Content Browser"))
            {
                // Open content browser
            }
            if (ImGui::MenuItem("Assets Browser"))
            {
                // Open assets browser
            }

            ImGui::EndMenu();
        }
    }
    ImGui::EndMainMenuBar();
}
