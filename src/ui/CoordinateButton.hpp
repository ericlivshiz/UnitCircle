#pragma once

#include "Button.hpp"

#include <SFML/Graphics.hpp>

#include <iostream>

class CoordinateButton : public Button {
public:
	CoordinateButton(sf::Vector2f position) 
		:
		Button(sf::Vector2f(position)) 
	{
		setText("(X, Y):", sf::Vector2f(735.0f, 625.0f));
	}

	void onClick() override
	{
		std::cout << "clicked Coordinate\n";
	}

};