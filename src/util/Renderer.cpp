#include "Renderer.hpp"

#include "Window.hpp"

#include "../UnitCircle.hpp"

#include "../ui/UserInterface.hpp"

#include <SFML/Graphics/Color.hpp>

#include "../ui/Button.hpp"


void Renderer::preRender()
{
	static const sf::Color CLEAR_COLOR{ sf::Color::Magenta };
	window.clear(CLEAR_COLOR);
}

void Renderer::postRender()
{
	window.display();
}

void Renderer::render(const UnitCircle& unitCircle, const UserInterface& userInterface)
{
	window.draw(unitCircle.getCircle());

	const RadialLine& rl{ unitCircle.getRadialLine() };
	const sf::RectangleShape& line{ rl.getLine() };

	window.draw(line);

	const RadialLine& srl{ unitCircle.getStationaryRadialLine() };
	const sf::RectangleShape& stationaryLine{ rl.getStatLine() };

	window.draw(stationaryLine);

	// TODO:
	// I want to create a getAllButtons() method that would be an array/vector of buttons
	// which would allow us to only make one function call and draw method
	const Button& db{ userInterface.getDegreeButton() };
	const sf::RectangleShape& degButton{ db.getBox() };

	window.draw(degButton);

	const sf::Text& dt{ db.getText() };

	window.draw(dt);

	const Button& rb{ userInterface.getRadianButton() };
	const sf::RectangleShape& radButton{ rb.getBox() };

	window.draw(radButton);

	const sf::Text& rt{ rb.getText() };

	window.draw(rt);

	const Button& cb{ userInterface.getCoordinateButton() };
	const sf::RectangleShape& coordButton{ cb.getBox() };

	window.draw(coordButton);

	const sf::Text& ct{ cb.getText() };

	window.draw(ct);
}