#include "Math.hpp"
#include <cmath>
#define PI 3.14159265

double Math::angleOf(const sf::Vector2f& v)
{
	// radians
	const float angle = atan2f(v.y, v.x);
	
	return angle;
}

double Math::toDegree(double rad)
{
	return 180 * (rad / (PI));
}

double Math::toRad(double deg)
{
	return deg / PI;
}


/*const double Math::radialToMouse()
{
	const int x = UnitCircle::centerPoint.x;
	const int y = UnitCircle::centerPoint.y;

	const int x2 = Mouse::getMousePos().x;
	const int y2 = Mouse::getMousePos().y;


	// calculate triangle sides
	const int vertSide = y2 - y;
	const int horizSide = x2 - x;
	const double hypot = std::hypotf(horizSide, vertSide);

	const double angFromTriangle = asin(vertSide / hypot) * 180 / PI;

	// REFERENCE ANGLES:

	//Quadrant 1
	double goToAngle{ angFromTriangle * -1 };

	// Quadrant 2
	if (x2 < x && y2 < y)
	{
		goToAngle = 180 - (angFromTriangle * -1);
	}

	// Quadrant 3
	else if (x2 < x && y2 > y)
	{
		goToAngle = 180 + angFromTriangle;
	}

	// Quadrant 4
	else if (x2 > x && y2 > y)
	{
		goToAngle = 360 - angFromTriangle;
	}

	return goToAngle;
}

// DEBUGGING STATEMENTS
	/*std::cout << "Vert side: " << vertSide << std::endl;
	std::cout << "Horiz side: " << horizSide << std::endl;
	std::cout << "Hypot: " << hypot << std::endl;
	std::cout << "Sin Of Angle: " << sinOfAngle << std::endl;
	std::cout << "Final Angle: "<< goToAngle << std::endl;
	

	std::cout << "Center point x: " << x << std::endl;
	std::cout << "Center point y: " << y << std::endl;

	std::cout << "mouse x: " << x2 << std::endl;
	std::cout << "mouse y: " << y2 << std::endl;


	-------------------------
	---------LOGIC-----------
	-------------------------
	The overall idea is to make a triangle and find an angle
	* <- this is mouse 
	|--\--------------
	|----\------------
	|______\& <-this is center point of circle
	
	we solve for angle near the &
	 
	subtract x2 from x (mouse x position - centerpoint x position)
	to find __________ side
	
	subtract y2 from y(mouse y position - centerpoint y  position)
	to find | side
	
	std::hypot to find the \ side
	
	we get the sin of the angle, then inverse the sin num to get angle
	
	can delete whenever*/
