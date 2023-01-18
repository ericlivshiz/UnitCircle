#pragma once

#include "button.hpp"

#include <SFML/Graphics.hpp>

class CoordinateButton : public Button {
public:
	CoordinateButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {
		setText("(X, Y):", sf::Vector2f(735.0f, 625.0f));
	}

	// setters/getters
	const sf::RectangleShape& getCoordinateBox() const { return coordBox; }

private:
	sf::RectangleShape coordBox;

};