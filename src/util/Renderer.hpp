#pragma once

class UnitCircle;
class UserInterface;
class Window;

class Renderer
{
	// public methods
public:
	Renderer(Window& window)
		:
		window{ window }
	{}

	void preRender();
	void postRender();

	void render(const UnitCircle& unitCircle, const UserInterface& userInterface);

	// private members
private:
	Window& window;
};