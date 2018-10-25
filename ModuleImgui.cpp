#include "ModuleImgui.h"
#include "Application.h"
#include "ModuleWindow.h"
#include "ModuleRender.h"
#include "GL/glew.h"
#include "IMGUI/imgui.h"
#include "IMGUI/imgui_impl_sdl.h"
#include "IMGUI/imgui_impl_opengl3.h"
#include <stdio.h>
#include "SDL/include/SDL.h"


ModuleImgui::ModuleImgui()
{
}


ModuleImgui::~ModuleImgui()
{
}

bool ModuleImgui::Init()
{
	bool ret = true;
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	return ret;
}

update_status ModuleImgui::PreUpdate()
{
	return UPDATE_CONTINUE;
}

update_status ModuleImgui::Update()
{
	return UPDATE_CONTINUE;
}

update_status ModuleImgui::PostUpdate()
{
	return UPDATE_CONTINUE;
}

bool ModuleImgui::CleanUp()
{
	bool ret = true;
	return ret;
}