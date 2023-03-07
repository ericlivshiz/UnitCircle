#include "Program.hpp"

#include <iostream>

#include <SFML/Window/WindowStyle.hpp>

Program::Program()
	:
	window{ "Unit Circle", sf::Style::Default },
	unitCircle{ { Window::STARTING_WIDTH / 2, Window::STARTING_HEIGHT / 2.5 } }
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

	// displacement vector from center of circle to mouse
	const sf::Vector2f displacement = getCircleToMouse();

	// update calls
	unitCircle.update(displacement);
	mouse.updateLockState();
	userInterface.checkForInput(mouse);
	/*math.radialToMouse();*/
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

const sf::Vector2f Program::getCircleToMouse() const
{
	const sf::Vector2i mousePosi = sf::Mouse::getPosition();
	const sf::Vector2f mousePosf = sf::Vector2f(mousePosi.x, mousePosi.y);

	const sf::Vector2i windowPosi = window.getWindow().getPosition();
	const sf::Vector2f windowPosf = sf::Vector2f(windowPosi.x, windowPosi.y);

	// displacement vector from center of circle to mouse
	const sf::Vector2f displacement = mousePosf - windowPosf - unitCircle.getPosition();

	return displacement;
}
