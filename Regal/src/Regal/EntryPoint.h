#pragma once

extern Regal::Application* Regal::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Regal::CreateApplication();
	app->Run();
	delete app;
	return 0;
}