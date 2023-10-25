#pragma once

#ifdef MI_PLATFORM_WINDOWS

extern Mirror::Application* Mirror::CreateApplication();

int main(int argc,char** argv)
{
	
	auto app = Mirror::CreateApplication();
	app->Run();
	delete app;
}
#endif // MI_PLATFORM_WINDOWS
