#include "UserInterface.hpp"

const void UserInterface::checkForInput(Mouse& mouse)
{
	sf::Vector2i mousePos = Mouse::getMousePos();

	if (degreeButton.isMouseInButton(mousePos, degreePos) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		// which button
		std::cout << "In degree button" << std::endl;
	}

	if (radianButton.isMouseInButton(mousePos, radianPos) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		// which button
		std::cout << "In radian button" << std::endl;
	}

	if (coordinateButton.isMouseInButton(mousePos, coordinatePos) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		// which button
		std::cout << "In coordinate button" << std::endl;
	}
}