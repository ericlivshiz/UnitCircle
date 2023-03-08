#include "Button.hpp"

#include <iostream>

Button::Button(sf::Vector2f position)
{
	std::cout << "Inside Button Constructor" << std::endl;
	buttonPos = position;
	designBox();
	setBox();
	
}

void Button::setBox()
{
	box.setSize(DIM);
	box.setPosition(sf::Vector2f(buttonPos));
}

void Button::designBox()
{
	// Not sure how to access the static color variables made
	const sf::Color BOX_COLOR(sf::Color::White);
	const sf::Color BOX_OUTLINE_COLOR(sf::Color::Black);

	box.setFillColor(BOX_COLOR);
	box.setOutlineColor(BOX_OUTLINE_COLOR);
	box.setOutlineThickness(BOX_THICKNESS);
}

void Button::setText(std::string buttonType, sf::Vector2f position)
{
	if (!buttonFont.loadFromFile("Castellar.ttf"))
		std::cout << "Couldn't load the font" << std::endl;

	buttonText.setPosition(position);
	buttonText.setString(buttonType);
	buttonText.setCharacterSize(40);
	buttonText.setFont(buttonFont);
	buttonText.setFillColor(sf::Color::Black);
}

bool Button::isMouseInButton(sf::Vector2i mousePos, sf::Vector2f butPosition)
{
	sf::FloatRect coversButton{ butPosition.x, butPosition.y, DIM.x, DIM.y};

	if (coversButton.contains(mousePos.x, mousePos.y)) {

		return true;
	}


	return false;
}