#pragma once

#include <SFML/Graphics.hpp>

class RadialLine {
public:
	RadialLine();
	sf::RectangleShape containsRadialLine() const { return storingRadialLine; };

private:
	void zeroDegLine();
	void storeRadialLine(const sf::RectangleShape& radialLine);

private:
	const float lineHeight = 5.0f;
	sf::RectangleShape storingRadialLine;

	const sf::Color BLACK_COLOR{ sf::Color::Black };

};