/*********************************************************************
** Author:       Adam Wright
** Date:         2/28/2019
** Description:  A Class called LineSegment that contains two 
**               Point-pointers, where each holds the address of a
**               Point object that represents an endpoint of the
**               LineSegment. 
*********************************************************************/

#include "Point.hpp"
#include "LineSegment.hpp"


/*********************************************************************
** Description:   Constructor function that takes in 2 point class 
**                pointers and passes each to a set end function.
*********************************************************************/
LineSegment::LineSegment(Point* p1, Point* p2)
{
	setEnd1(p1);
	setEnd2(p2);
}

void LineSegment::setEnd1(Point* input)
{
	p1 = input;
}

Point* LineSegment::getEnd1()
{
	return p1;
}

void LineSegment::setEnd2(Point* input)
{
	p2 = input;
}

Point* LineSegment::getEnd2()
{
	return p2;
}

/*********************************************************************
** Description:   A method called length that returns the length of 
**                the LineSegment by using the distanceTo method on
**                its endpoints.
*********************************************************************/
double LineSegment::length()
{
	double lineLength = 0.0;
	lineLength = p1->distanceTo(*p2);

	return lineLength;
}

/*********************************************************************
** Description:   A method called slope that returns the slope of the 
**                LineSegment. It subtracts the second y from the first
**                and the second x from the first and divides y by x.
*********************************************************************/
double LineSegment::slope()
{
	double slope = 0.0;
	slope = (p2->getYCoord() - p1->getYCoord()) / (p2->getXCoord() - p1->getXCoord());

	return slope;
}