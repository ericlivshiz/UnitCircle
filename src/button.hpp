#pragma once

#include <string>

#include <SFML/Graphics.hpp>

class Button {
public:
	Button(sf::Vector2f position);

	const sf::RectangleShape& getBox() const	{ return box; }
	void setText(std::string buttonType, sf::Vector2f position);
	const sf::Text& getText() const				{ return buttonText; }

	void onClick();
	
private:
	void designBox();
	void setBox();

private:
	sf::Vector2f position;
	sf::RectangleShape box;

	sf::Text buttonText;
	sf::Font buttonFont;

	const float BOX_THICKNESS{ 5.0f };

};