#pragma once

#include <SFML/Graphics.hpp>

#include "button.hpp"


class DegreeButton : public Button {
public:
	DegreeButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {
		
	}

	// setters/getters
	const sf::RectangleShape& getDegreeBox() const	{ return degreeBox; }

private:
	sf::RectangleShape degreeBox;

};