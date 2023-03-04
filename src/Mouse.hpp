#pragma once

#include <SFML/Graphics.hpp>
#include "util/Window.hpp"

class Mouse {
public:
	const sf::Vector2i& getMousePos() const { return pixelPos; }

	Mouse(const sf::RenderWindow& windowRef);
	bool isLocked();

private:
	sf::Vector2i pixelPos;
	const sf::RenderWindow& window;
};