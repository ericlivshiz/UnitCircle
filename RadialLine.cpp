#include "RadialLine.hpp"

#include <SFML/Graphics.hpp>

#include <iostream>

RadialLine::RadialLine(const sf::Vector2f& anchor, const float& length)
	:
	anchorPoint{ anchor },
	length{ length }
{
	std::cout << "Inside Radial Line constructor" << std::endl;
	
	designLine();
	update();
}

void RadialLine::update()
{
	line.setRotation(angle);
	line.setPosition(anchorPoint);
	line.setSize({ length, 1 });

	stationaryLineTest.setRotation(0);
	stationaryLineTest.setPosition(anchorPoint);
	stationaryLineTest.setSize({ length, 1 });
}

void RadialLine::designLine() 
{
	static const sf::Color LINE_COLOR{ sf::Color::Black };

	line.setFillColor(LINE_COLOR);
	line.setOutlineColor(LINE_COLOR);
	line.setOutlineThickness(lineThickness);

	stationaryLineTest.setFillColor(LINE_COLOR);
	stationaryLineTest.setOutlineColor(LINE_COLOR);
	stationaryLineTest.setOutlineThickness(lineThickness);
}
