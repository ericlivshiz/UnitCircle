#pragma once

#include "RadialLine.hpp"

#include "SFML/Graphics.hpp"

namespace sf {
    class CircleShape;
    class Color;
}

class UnitCircle
{

// Public methods
public:
    UnitCircle();
   
    void createCircle(const sf::CircleShape& circle);
    sf::CircleShape getCircle() const { return storingCircle; }
    sf::Vector2f getPosition() const { return circlePosition; }
    sf::RectangleShape getRadialLine();
    float getRadius() const { return circleRad; }

// Private methods
private:
    void storeCircle(const sf::CircleShape& circle);
    void designCircle();
    
    

// Private variables
private:
    sf::CircleShape storingCircle;

    const sf::Color BLACK_COLOR{ sf::Color::Black };
    const sf::Color WHITE_COLOR{ sf::Color::White };

    sf::Vector2f circlePosition;
    static const int circleRad = 225;
    const float outlineThickness = 5.0f;

    RadialLine radialLine;

};