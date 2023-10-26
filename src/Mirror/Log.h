#pragma once
#include <memory>

#include "Core.h"
#include"spdlog/spdlog.h"
namespace Mirror {

	class  MIRROR_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;



	};
}

//������־��¼
#define MI_CORE_TRACE(...)     ::Mirror::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MI_CORE_INFO(...)      ::Mirror::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MI_CORE_WARN(...)      ::Mirror::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MI_CORE_ERROR(...)     ::Mirror::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MI_CORE_FATAL(...)     ::Mirror::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//������־��¼
#define MI_TRACE(...)          ::Mirror::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MI_INFO(...)		   ::Mirror::Log::GetClientLogger()->info(__VA_ARGS__)
#define MI_WARN(...)		   ::Mirror::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MI_ERROR(...)		   ::Mirror::Log::GetClientLogger()->error(__VA_ARGS__)
#define MI_FATAL(...)		   ::Mirror::Log::GetClientLogger()->fatal(__VA_ARGS_