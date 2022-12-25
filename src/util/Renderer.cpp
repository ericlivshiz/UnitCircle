#include "Renderer.hpp"

#include "Window.hpp"

#include <SFML/Graphics/Color.hpp>

void Renderer::preRender()
{
	static const sf::Color CLEAR_COLOR{ sf::Color::Magenta };
	window.clear(CLEAR_COLOR);
}

void Renderer::postRender()
{
	window.display();
}