#pragma once

#include "Button.hpp"

#include <SFML/Graphics.hpp>

#include <iostream>

class RadianButton : public Button {
public:
	RadianButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {
		setText("RADIANS:", sf::Vector2f(395.0f, 625.0f));
	}

	void onClick() override
	{
		std::cout << "clicked rad\n";
	}
	

};