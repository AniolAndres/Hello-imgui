#include "ModuleProgram.h"



ModuleProgram::ModuleProgram()
{
}


ModuleProgram::~ModuleProgram()
{
}

bool ModuleProgram::Init()
{
	bool ret = true;

	char* data = nullptr;
	FILE* file = nullptr;
	fopen_s(&file, "default.vs", "rb");
	if (file)
	{
		fseek(file, 0, SEEK_END);
		int size = ftell(file);
		rewind(file);
		char* data = (char*)malloc(size + 1);
		fread(data, 1, size, file);
		data[size] = 0;
		fclose(file);
	}

	char* data2 = nullptr;
	FILE* file2 = nullptr;
	fopen_s(&file2, "default.fs", "rb");
	if (file2)
	{
		fseek(file2, 0, SEEK_END);
		int size = ftell(file2);
		rewind(file2);
		char* data2 = (char*)malloc(size + 1);
		fread(data2, 1, size, file2);
		data2[size] = 0;
		fclose(file2);
	}

	return ret;
}

update_status ModuleProgram::Update()
{
	return UPDATE_CONTINUE;
}

bool ModuleProgram::CleanUp()
{
	bool ret=true;
	return ret;
}