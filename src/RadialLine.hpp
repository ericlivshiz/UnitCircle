#pragma once

#include <SFML/Graphics/RectangleShape.hpp>

class RadialLine 
{
public:
	RadialLine(const sf::Vector2f& anchor, const float& length);

	void update();

	// setters/getters
	void setAngle(float a)					  { angle = a;	 }

	const sf::RectangleShape& getLine() const { return line; }

	const sf::RectangleShape& getStatLine() const { return stationaryLineTest; }
private:
	void designLine();

private:
	sf::RectangleShape line;

	sf::RectangleShape stationaryLineTest;
	
	float angle{ 0 };

	const float lineThickness{ 5.0f };

	// dependancies on unit circle
	const sf::Vector2f& anchorPoint;
	const float& length;

};