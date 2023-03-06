#pragma once

// todo: remove
// math shouldn't depend on the unit circle or mouse,
// it should have as few dependanices as possible
#include "UnitCircle.hpp"
#include "Mouse.hpp"

// math only needs to know what an sf::Vector is really in terms of data types
#include <SFML/System/Vector2.hpp>

class Math {
	// radialToMouse() is a function that calculates the angle
	// to move a radial line to follow the mouse, using 
	// the mouse position and the center of the circle
public:
	static const double radialToMouse();

	static double angleOf(const sf::Vector2f& v);
	static double toDegree(double rad);
	static double toRad(double deg);
};