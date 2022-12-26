#pragma once

class UnitCircle;
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

	void render(const UnitCircle& unitCircle);

	// private members
private:
	Window& window;
};