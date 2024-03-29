#include "Mouse.hpp"
#include <iostream>

#include "util/Window.hpp"

#include "ui/UserInterface.hpp"

Mouse::Mouse(const Window& window)
	:
	window(window.getWindow())
{
	updateMousePos();
}

bool Mouse::isMouseOverUI()
{
	return UserInterface::getUISpace().contains(getMousePos().x, getMousePos().y);
}

void Mouse::updateLockState()
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		isLock = true;

	if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
		isLock = false;

	updateMousePos();

	if (isMouseOverUI())
		isLock = false;
}

// UpdateLockState() - debug code
/*	std::cout << "Is locked: " << isLock << std::endl;
	std::cout << "X: " << getMousePos().x << std::endl;
	std::cout << "Y: " << getMousePos().y << std::endl;
	if (UserInterface::getUISpace().contains(getMousePos().x, getMousePos().y))
		std::cout << "INSIDE RECT" << std::endl;*/