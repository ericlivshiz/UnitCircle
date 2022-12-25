#include "Window.hpp"

#include <SFML/Graphics/Drawable.hpp>

#include <SFML/Window/Event.hpp>

Window::Window(unsigned width, unsigned height, const std::string& name, int style)
{
	window.create(sf::VideoMode(width, height), name, style);
	
	static constexpr unsigned FPS_LIMIT{ 60 };
	
	window.setFramerateLimit(FPS_LIMIT);
}

void Window::update()
{
	pollEvents();
}

void Window::pollEvents()
{
	sf::Event event;

	if (window.pollEvent(event))
		switch (event.type)
		{
			case sf::Event::Closed:			window.close();		break;
			case sf::Event::GainedFocus:	focused = true;		break;
			case sf::Event::LostFocus:		focused = false;	break;
		}
}

void Window::clear(const sf::Color& clearColor)
{
	window.clear(clearColor);
}

void Window::draw(const sf::Drawable& object)
{
	window.draw(object);
}

void Window::display()
{
	window.display();
}
