#include "Globals.h"
#include "Module.h"
#include "IMGUI/imgui.h"
#include "IMGUI/imgui_impl_sdl.h"
#include "IMGUI/imgui_impl_opengl3.h"

class ModuleImgui :
	public Module
{
public:
	ModuleImgui();
	~ModuleImgui();

	bool Init();

	update_status PreUpdate();

	update_status Update();

	update_status PostUpdate();

	bool CleanUp();

};

