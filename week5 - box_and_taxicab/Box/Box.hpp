/*********************************************************************
** Author:         Adam Wright
** Date:           2/6/2019
** Description:    A class called Box that has three double fields
**                 called height, width and length that calculates and
**                 returns the volume of the Box and a method that
**                 calculates and returns the surface area of the Box.
*********************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
	double height;
	double width;
	double length;
public:
	Box();
	Box(double, double, double);
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double calcVolume();
	double calcSurfaceArea();
};
#endif
