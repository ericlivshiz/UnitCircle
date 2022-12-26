#include "UnitCircle.hpp"

#include "util/Window.hpp"

#include "RadialLine.hpp"

#include <SFML/Graphics.hpp>

#include <iostream>

UnitCircle::UnitCircle()
{
    std::cout << "Unit Circle Constructor" << std::endl;
    sf::CircleShape circleShape;
    createCircle(circleShape);
    
}

void UnitCircle::createCircle(const sf::CircleShape& circleShape)
{
    
    storeCircle(circleShape);
    designCircle();

}

void UnitCircle::storeCircle(const sf::CircleShape& circleShape)
{
    this->storingCircle = circleShape;
}

void UnitCircle::designCircle()
{
    circlePosition = sf::Vector2f(275.0f, 50.0f);
    this->storingCircle.setFillColor(WHITE_COLOR);
    this->storingCircle.setRadius(circleRad);
    this->storingCircle.setPosition(circlePosition);
    this->storingCircle.setOutlineColor(BLACK_COLOR);
    this->storingCircle.setOutlineThickness(outlineThickness);
}

sf::RectangleShape UnitCircle::getRadialLine()
{
    return radialLine.containsRadialLine();
}