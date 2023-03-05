#pragma once

#include <SFML/Graphics.hpp>
#include "util/Window.hpp"
#include "UserInterface.hpp"

class Mouse {
public:
	Mouse(const sf::RenderWindow& windowRef);

public:
	const sf::Vector2i& getMousePos() const { return pixelPos; }
	bool isMouseOverUI();
	void updateLockState();

	bool getLockStatus() const  { return isLock; }
	void setLock()				{ isLock = true; }
	void setUnlock()			{ isLock = false; }

private:
	sf::Vector2i pixelPos;
	const sf::RenderWindow& window;
	bool isLock = false;

	void updateMousePos() { pixelPos = sf::Mouse::getPosition(window); }
};