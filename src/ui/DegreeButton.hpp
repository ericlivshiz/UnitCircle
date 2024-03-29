#pragma once

#include <SFML/Graphics.hpp>

#include "Button.hpp"

#include <iostream>

class DegreeButton : public Button {
public:
	DegreeButton(sf::Vector2f(position)) : Button(sf::Vector2f(position)) {
		setText("DEGREES:", sf::Vector2f(105.0f, 625.0f));
		std::cout << "Inside Degree Button Constructor" << std::endl;
	}

	void onClick() override
	{
		std::cout << "clicked degree\n";
	}

};