#pragma once

#include "util/Renderer.hpp"
#include "util/Window.hpp"
#include "UnitCircle.hpp"
#include "ui/UserInterface.hpp"
#include "util/Math.hpp"
#include "Mouse.hpp"


class Program
{
	// public methods
public:
	Program();

	void start();

	// private methods
private:

	void programLoop();

	void handleInput();
	void update();
	void display();
	
	void stop();

	const sf::Vector2f getCircleToMouse() const;

	// private members
private:

	Window window;
	Renderer renderer{ window };
	UnitCircle unitCircle;
	UserInterface userInterface;

	Mouse mouse{ window };

	bool isRunning{ false };

};