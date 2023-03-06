#pragma once

#include "util/Renderer.hpp"
#include "util/Window.hpp"
#include "UnitCircle.hpp"
#include "UserInterface.hpp"
#include "Math.hpp"
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

	// private members
private:

	Window window;
	Renderer renderer{ window };
	UnitCircle unitCircle;
	UserInterface userInterface;
	Math math;

	const sf::RenderWindow& windowRef = window.getWindow();
	Mouse mouse{windowRef};

	bool isRunning{ false };

};