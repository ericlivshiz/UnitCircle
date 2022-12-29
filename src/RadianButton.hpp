#pragma once

#include "button.hpp"

#include <SFML/Graphics.hpp>


class RadianButton : public Button {
public:
	RadianButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {

	}

	// setters/getters
	const sf::RectangleShape& getRadianBox() const { return radianBox; }

private:
	sf::RectangleShape radianBox;

};