#pragma once

#include "DegreeButton.hpp"

#include "RadianButton.hpp"

#include "CoordinateButton.hpp"

#include <SFML/Graphics.hpp>

class UserInterface {
public:
	const DegreeButton& getDegreeButton() const { return degreeButton; }
	const RadianButton& getRadianButton() const { return radianButton; }
	const CoordinateButton& getCoordinateButton() const { return coordinateButton; }


private:
	sf::Vector2f degreePos{ 400.0f, 675.0f };
	sf::Vector2f radianPos{ 100.0f, 675.0f };
	sf::Vector2f coordinatePos{ 700.0f, 675.0f };

	DegreeButton degreeButton{degreePos};
	RadianButton radianButton{radianPos};
	CoordinateButton coordinateButton{ coordinatePos };
};