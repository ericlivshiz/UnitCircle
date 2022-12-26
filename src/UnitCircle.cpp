#include "UnitCircle.hpp"

#include "RadialLine.hpp"

#include <iostream>

UnitCircle::UnitCircle(const sf::Vector2f& startingPos)
    :
    position{ startingPos }
{
    std::cout << "Unit Circle Constructor" << std::endl;

    designCircle();
}

void UnitCircle::update(const sf::Vector2f& displacement)
{
    //todo: complete

    static int radialLineAngle{ 0 };
    radialLineAngle++;

    radialLine.setAngle((float)radialLineAngle);

    radialLine.update();

    radius--;
    position.x--;
    position.y--;

    designCircle();
}

void UnitCircle::designCircle()
{
    //position = sf::Vector2f(275.0f, 50.0f);
    
    circleShape.setRadius(radius);

    const sf::Vector2f centerPosition{ sf::Vector2f{ 
        position.x - radius, 
        position.y - radius 
    } };
    circleShape.setPosition(centerPosition);
    
    static const sf::Color FILL_COLOR{ sf::Color::White };
    static const sf::Color OUTLINE_COLOR{ sf::Color::Black };
    static const float outlineThickness{ 5.0f };

    circleShape.setFillColor(FILL_COLOR);
    circleShape.setOutlineColor(OUTLINE_COLOR);
    circleShape.setOutlineThickness(outlineThickness);
}
