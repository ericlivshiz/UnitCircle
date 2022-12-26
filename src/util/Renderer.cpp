#include "Renderer.hpp"

#include "Window.hpp"

#include "../UnitCircle.hpp"

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

void Renderer::render(const UnitCircle& unitCircle)
{
	window.draw(unitCircle.getCircle());

	const RadialLine& rl{ unitCircle.getRadialLine() };
	const sf::RectangleShape& line{ rl.getLine() };

	window.draw(line);
}