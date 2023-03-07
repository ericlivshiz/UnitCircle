#pragma once

#include <SFML/Graphics.hpp>


class Window;

class Mouse {
public:
	Mouse(const Window& window);

public:
	static inline const sf::Vector2i& getMousePos() { return pixelPos; }
	bool isMouseOverUI();
	void updateLockState();

	bool getLockStatus() const  { return isLock; }
	void setLock()				{ isLock = true; }
	void setUnlock()			{ isLock = false; }

private:
	static inline sf::Vector2i pixelPos;
	const sf::RenderWindow& window;
	bool isLock = false;

	void updateMousePos() { pixelPos = sf::Mouse::getPosition(window); }
};