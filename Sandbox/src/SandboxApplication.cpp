#include <Regal.h>

class Sandbox : public Regal::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Regal::Application* Regal::CreateApplication()
{
	return new Sandbox();
}