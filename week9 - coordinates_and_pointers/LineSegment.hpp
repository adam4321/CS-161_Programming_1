/*********************************************************************
** Author:       Adam Wright
** Date:         2/28/2019
** Description:  A header file for a class called LineSegment that 
**               contains two Point-pointers, where each holds the
**               address of a Point object that represents an endpoint
**               of the LineSegment.
*********************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
private:
	Point* p1;
	Point* p2;
public:
	LineSegment(Point* p1, Point* p2);
	void setEnd1(Point* input);
	Point* getEnd1();
	void setEnd2(Point* input);
	Point* getEnd2();
	double length();
	double slope();
};
#endif