/*********************************************************************
** Author:         Adam Wright
** Date:           2/6/2019
** Description:    A class called Box that has three double fields 
**                 called height, width and length that calculates and
**                 returns the volume of the Box and a method that 
**                 calculates and returns the surface area of the Box.
*********************************************************************/

#include <iostream>
#include "Box.hpp"

using std::cout;
using std::endl;


int main()
{
	Box box1(2.4, 7.1, 5.0);
	Box box2;

	double volume1 = box1.calcVolume();
	double surfaceArea1 = box1.calcSurfaceArea();
	double volume2 = box2.calcVolume();
	double surfaceArea2 = box2.calcSurfaceArea();

	cout << "Box 1 volume: " << volume1 << endl;
	cout << "Box 1 surface area: " << surfaceArea1 << endl;
	cout << "Box 2 volume: " << volume2 << endl;
	cout << "Box 2 surface area: " << surfaceArea2 << endl;

	return 0;
}