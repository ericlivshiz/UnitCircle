#include "UserInterface.hpp"

const void UserInterface::checkForInput(Mouse& mouse)
{
	if (Button::isButtonClicked(mouse))
	{
		// which button
		std::cout << "Testing" << std::endl;
	}
}