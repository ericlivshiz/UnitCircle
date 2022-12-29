#pragma once

#include <SFML/Graphics.hpp>

class Button {
public:
	Button(sf::Vector2f position);

	const sf::RectangleShape& getBox() const	{ return box; };
	void onClick();


private:
	void designBox();
	void setBox();

private:
	sf::Vector2f position;
	sf::RectangleShape box;

	const float BOX_THICKNESS{ 5.0f };

};