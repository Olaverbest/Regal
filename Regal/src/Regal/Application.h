#pragma once

namespace Regal {

	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Has to be defined in the client.
	Application* CreateApplication();
}