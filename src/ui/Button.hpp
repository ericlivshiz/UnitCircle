#pragma once

#include <string>
#include "../Mouse.hpp"

#include <SFML/Graphics.hpp>

class Button {
public:
	Button(sf::Vector2f position);

	void setText(std::string buttonType, sf::Vector2f position);

	const sf::RectangleShape& getBox() const	{ return box; }
	const sf::Text& getText() const				{ return buttonText; }

	virtual void onClick() = 0;	// abstract method
	static bool isButtonClicked(Mouse& mouse);

private:
	void designBox();
	void setBox();

	static inline sf::Vector2f buttonPos;
	void setButtonPos(sf::Vector2f position) { buttonPos = position; }

private:
	sf::RectangleShape box;

	sf::Text buttonText;
	sf::Font buttonFont;

	const float BOX_THICKNESS{ 5.0f };
	static const inline sf::Vector2f DIM{ 200.0f, 50.0f };
};