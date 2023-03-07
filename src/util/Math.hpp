#pragma once

#include <SFML/System/Vector2.hpp>

class Math {
public:
	static double angleOf(const sf::Vector2f& v);
	static double toDegree(double rad);
	static double toRad(double deg);
};