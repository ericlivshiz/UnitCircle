#pragma once

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

	//void render(const Thing& t);

	// private members
private:
	Window& window;

};