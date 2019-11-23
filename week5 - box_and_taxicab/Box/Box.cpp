/*********************************************************************
** Author:         Adam Wright
** Date:           2/6/2019
** Description:    A class called Box that has three double fields
**                 called height, width and length that calculates and
**                 returns the volume of the Box and a method that
**                 calculates and returns the surface area of the Box.
*********************************************************************/

#include "Box.hpp"


// Default constructor function
Box::Box()
{
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
}

// Class constructor function
Box::Box(double heightIn, double widthIn, double lengthIn)
{
	setHeight(heightIn);
	setWidth(widthIn);
	setLength(lengthIn);
}

// Set the private height variable
void Box::setHeight(double heightIn)
{
	height = heightIn;
}

// Set the private width variable
void Box::setWidth(double widthIn)
{
	width = widthIn;
}

// Set the private length variable
void Box::setLength(double lengthIn)
{
	length = lengthIn;
}

/*********************************************************************
** Description:   Function that calculates the volume of a cube by the 
**                formula H x W x L
*********************************************************************/
double Box::calcVolume()
{
	return  height * width * length;
}

/*********************************************************************
** Description:  Function that calculates the surface area of a cube
**               by the formula 2(LW) + 2(LH) + 2(WH)
*********************************************************************/
double Box::calcSurfaceArea()
{
	double surface = 0;

	surface = 2 * (length * width);
	surface += 2 * (length * height);
	surface += 2 * (width * height);

	return surface;
}
