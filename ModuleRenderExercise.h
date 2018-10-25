#ifndef __ModuleRenderExercise_h__
#define __ModuleRenderExercise_h__

#include "Module.h"
#include "MathGeoLib.h"

class ModuleRenderExercise : public Module
{
public:
    ModuleRenderExercise();
    ~ModuleRenderExercise();

	bool            Init    ();
	update_status   Update  ();
	bool            CleanUp ();


private:
    unsigned vbo = 0;
	float3 target = { 0,0,0 };
	float3 eye = {1,3,5};
	float3 up = { 0,1,0 };
	float4x4 viewMatrix;
	float4x4 projectionMatrix;
	float4x4 resultMatrix;
	
	
};

#endif /* __ModuleRenderExercise_h__ */
