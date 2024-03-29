#include "UnitCircle.hpp"

#include <SFML/Graphics.hpp>

#include "RadialLine.hpp"
#include "util/Window.hpp"
#include "util/Math.hpp"

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

    /*static float radialLineAngle{ 0 };
    radialLineAngle--;*/

    //radialLine.setAngle(Math::radialToMouse()*-1);

    const double angle{ Math::angleOf(displacement) };

    radialLine.setAngle(Math::toDegree(angle));

    radialLine.update();

    static const int zeroDegAngle{ 0 };

    stationaryRadialLine.setAngle(zeroDegAngle);

    stationaryRadialLine.update();
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
