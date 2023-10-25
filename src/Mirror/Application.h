#pragma once
#include "Core.h"


namespace Mirror {

	class MIRROR_API Application
	{
	public:
		Application();
		virtual~Application();

	

		void Run();
		
	
	};
	// to be defined in CLIENT
	Application* CreateApplication();

}
