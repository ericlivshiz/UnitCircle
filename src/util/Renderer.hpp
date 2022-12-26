#pragma once

// Oops, this is going to cause an error for you, but couldn't figure out how
// to include files outside of util folder any other way
#include "D:\Users\karse\source\repos\UnitCircle1.3\src\UnitCircle.hpp"

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
	void render(UnitCircle& unitCircle);

	//void render(const Thing& t);

	// private members
private:
	Window& window;
};