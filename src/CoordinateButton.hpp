#pragma once

#include "button.hpp"

#include <SFML/Graphics.hpp>

class CoordinateButton : public Button {
public:
	CoordinateButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {

	}

	// setters/getters
	const sf::RectangleShape& getCoordinateBox() const { return coordBox; }

private:
	sf::RectangleShape coordBox;

};