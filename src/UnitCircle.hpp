#pragma once

#include <SFML/Graphics/CircleShape.hpp>

#include "RadialLine.hpp"

class UnitCircle
{
// Public methods
public:
    UnitCircle(const sf::Vector2f& startingPos);
    void update(const sf::Vector2f& displacement);

    // getters
    const float getRadius() const               { return radius;      }
    const sf::CircleShape& getCircle() const    { return circleShape; }
    const sf::Vector2f& getPosition() const     { return position;    }
    const RadialLine& getRadialLine() const     { return radialLine;  }
    const RadialLine& getStationaryRadialLine() const { return stationaryRadialLine; }

public:
    // todo: delete and replace all instances of getPosition()
    static inline const sf::Vector2i centerPoint{498, 318};

// Private methods
private:
    void designCircle();
    
// Private variables
private:
    // circle part
    sf::CircleShape circleShape;
    sf::Vector2f position;
    const float radius{ 225 };
    
    // radial lines
    RadialLine radialLine{ position, radius };
    RadialLine stationaryRadialLine{ position, radius };


};