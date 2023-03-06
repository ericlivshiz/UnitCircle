#include "Program.hpp"

#include <iostream>

#include <SFML/Window/WindowStyle.hpp>

Program::Program()
	:
	window{ "Unit Circle", sf::Style::Default },
	unitCircle{ { Window::STARTING_WIDTH / 2, Window::STARTING_HEIGHT / 2.5 } },
	userInterface{},
	mouse{ windowRef },
	math{}
{}

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
	/*std::cout << "Handle Input\n";*/
}

void Program::update()
{
	window.update();
	if (!window.isOpen())
		stop();

	// update calls

	// todo: pass actual arguments
	unitCircle.update({0,0});
	mouse.updateLockState();
	math.radialToMouse();
}

void Program::display()
{
	renderer.preRender();

	renderer.render(unitCircle, userInterface);

	renderer.postRender();
}

void Program::stop()
{
	isRunning = false;
}