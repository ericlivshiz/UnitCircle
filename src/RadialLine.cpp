#include "RadialLine.hpp"

#include <SFML/Graphics.hpp>

#include <iostream>

RadialLine::RadialLine()
{
	std::cout << "Inside Radial Line constructor" << std::endl;
	zeroDegLine();
}

void RadialLine::zeroDegLine() {
	sf::RectangleShape stationaryLine(sf::Vector2f(210.0f, lineHeight));

	stationaryLine.setPosition(520.0f, 260.0f);
	stationaryLine.setFillColor(BLACK_COLOR);
	storeRadialLine(stationaryLine);
}

void RadialLine::storeRadialLine(const sf::RectangleShape& stationaryLine)
{
	this->storingRadialLine = stationaryLine;
}


