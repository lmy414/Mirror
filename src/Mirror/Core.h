#pragma once
#ifdef MI_PLATFORM_WINDOWS
	#ifdef MI_BUILD_DLL 
		#define MIRROR_API _declspec(dllexport)
	#else
		#define MIRROR_API _declspec(dllimport)
	#endif
#else
		#error  Mirror only supports windows!
#endif
