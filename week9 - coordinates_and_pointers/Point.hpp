/*********************************************************************
** Author:        Adam Wright
** Date:          2/28/2019
** Description:   Header file that declares a class called Point that
**                contains two doubles that represent its x- and
**                y-coordinates.
*********************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	void setXCoord(double input);
	double getXCoord();
	void setYCoord(double input);
	double getYCoord();
	double distanceTo(Point otherPoint);
};
#endif