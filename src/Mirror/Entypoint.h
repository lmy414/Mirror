#pragma once

#ifdef MI_PLATFORM_WINDOWS

extern Mirror::Application* Mirror::CreateApplication();

int main(int argc,char** argv)
{

	Mirror::Log::Init();
	MI_CORE_WARN("Initialized Log");
	int a = 5;
	MI_INFO("Hello!  var={0}",a); 

	auto app = Mirror::CreateApplication();
	app->Run();
	delete app;
}
#endif // MI_PLATFORM_WINDOWS
