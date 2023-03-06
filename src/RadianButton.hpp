#pragma once

#include "button.hpp"

#include <SFML/Graphics.hpp>


class RadianButton : public Button {
public:
	RadianButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {
		setText("RADIANS:", sf::Vector2f(395.0f, 625.0f));
	}

	// setters/getters
	const sf::RectangleShape& getRadianBox() const { return radianBox; }

private:
	sf::RectangleShape radianBox;

};