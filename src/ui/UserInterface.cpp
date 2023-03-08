#include "UserInterface.hpp"

UserInterface::UserInterface()
{
	buttons.push_back(&degreeButton);
	buttons.push_back(&radianButton);
	buttons.push_back(&coordinateButton);
}

const void UserInterface::checkForInput(Mouse& mouse)
{
	sf::Vector2i mousePos = Mouse::getMousePos();

	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		for (Button* button : buttons)
		{
			if (button->isMouseInButton(mousePos, button->getBox().getPosition()))
				button->onClick();
		}
	}

}