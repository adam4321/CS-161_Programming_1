/*********************************************************************
** Author:       Adam Wright
** Date:         2/28/2019
** Description:  A Class called Point that contains two doubles that 
**               represent its x- and y-coordinates and methods to get
**               and set those coordinates. It also contains a method
**               that takes another point as an argument and returns
**               the distance between the points.
*********************************************************************/

#include "Point.hpp"
#include <cmath>


/*********************************************************************
** Description:  The default constructor for Point sets x and y to zero.
*********************************************************************/
Point::Point()
{
	x = 0.0;
	y = 0.0;
}

/*********************************************************************
** Description:   The constructor function passes x on to set x and 
**                passes y to set y.
*********************************************************************/
Point::Point(double x, double y)
{
	setXCoord(x);
	setYCoord(y);
}

void Point::setXCoord(double input)
{
	x = input;
}

double Point::getXCoord()
{
	return x;
}

void Point::setYCoord(double input)
{
	y = input;
}

double Point::getYCoord()
{
	return y;
}

/*********************************************************************
** Description:   Function that takes as a parameter another Point and 
**                returns the distance from the Point that was passed
**                as a parameter to the Point that we called the method
**                of. Local x and y minus the ones passed in. They are
**                each squared added and the square root is returned.
*********************************************************************/
double Point::distanceTo(Point otherPoint)
{
	double distance = 0.0;
	distance = pow((x - otherPoint.x), 2) + pow((y - otherPoint.y), 2);
	distance = sqrt(distance);

	return distance;
}
