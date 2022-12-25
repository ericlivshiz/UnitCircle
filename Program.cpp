#include "Program.hpp"

#include <iostream>

#include <SFML/Window/WindowStyle.hpp>

Program::Program()
	: 
	window{ 800, 600, "Unit Circle", sf::Style::Default }
{
}

void Program::start()
{
	isRunning = true;
	programLoop();
}

void Program::programLoop()
{
	while (isRunning)
	{
		handleInput();
		update();
		display();
	}
}

void Program::handleInput()
{
	std::cout << "Handle Input\n";
}

void Program::update()
{
	window.update();

	if (!window.isOpen())
		stop();

	// update calls
}

void Program::display()
{
	renderer.preRender();

	// render calls

	renderer.postRender();
}

void Program::stop()
{
	isRunning = false;
}