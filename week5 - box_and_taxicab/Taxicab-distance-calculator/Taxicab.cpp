/*********************************************************************
** Author:        Adam Wright
** Date:          2/6/2019
** Description:   A class called Taxicab that has three int fields
**                to store its current x- and y-coordinates and the
**                total distance it has driven so far
*********************************************************************/

#include "Taxicab.hpp"
#include <cmath>


// Define the default constructor
Taxicab::Taxicab()
{
	xCord = 0;
	yCord = 0;
	moveX(0);
	moveY(0);
	distance = 0;
}

// Class constructor function
Taxicab::Taxicab(int xIn, int yIn)
{
	xCord = 0;
	yCord = 0;
	moveX(xIn);
	moveY(yIn);
	distance = 0;
}

// Get the current x coordinate
int Taxicab::getXCoord()
{
	return xCord;
}

// Get the current y coordinate
int Taxicab::getYCoord()
{
	return yCord;
}

// Get the total distance traveled
int Taxicab::getDistanceTraveled()
{
	return distance;
}

/*********************************************************************
** Description:  Add the absolute value x plane distance traveled and 
**               move the x coordinate to it's new location
*********************************************************************/
void Taxicab::moveX(int xIn)
{
	distance += std::abs(xIn);
	xCord += xIn;
}

/*********************************************************************
** Description:  Add the absolute value y plane distance traveled and
**               move the y coordinate to it's new location
*********************************************************************/
void Taxicab::moveY(int yIn)
{
	distance += std::abs(yIn);
	yCord += yIn;
}
