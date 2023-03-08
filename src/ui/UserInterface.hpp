#pragma once

#include "DegreeButton.hpp"

#include "RadianButton.hpp"

#include "CoordinateButton.hpp"

#include <SFML/Graphics.hpp>

#include <vector>

class UserInterface {
public:

	UserInterface();

	const DegreeButton& getDegreeButton() const { return degreeButton; }
	const RadianButton& getRadianButton() const { return radianButton; }
	const CoordinateButton& getCoordinateButton() const { return coordinateButton; }
	static const sf::FloatRect& getUISpace()	{ return UIspace; }
	const void checkForInput(Mouse& mouse);

public:
	static inline const sf::FloatRect UIspace{ 0.0f, 630.0f, 1000.0f, 200.0f };

private:
	sf::Vector2f degreePos{ 100.0f, 675.0f };
	sf::Vector2f radianPos{ 400.0f, 675.0f };
	sf::Vector2f coordinatePos{ 700.0f, 675.0f };

	DegreeButton degreeButton{degreePos};
	RadianButton radianButton{radianPos};
	CoordinateButton coordinateButton{ coordinatePos };

	std::vector<Button*> buttons;

};