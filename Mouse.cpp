#include "Mouse.hpp"
#include "debugMacro.hpp"
#include <iostream>

Mouse::Mouse(const sf::RenderWindow& windowRef)
	:
	window(windowRef)
{
	pixelPos = sf::Mouse::getPosition(window);

	DEBUG("The X Coordinate is: " << getMousePos().x);
	DEBUG("The Y Coordinate is: " << getMousePos().y);
}

void Mouse::updateLockState()
{
	while (window.isOpen())
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			isLock = true;

		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
			isLock = false;
	}
}
