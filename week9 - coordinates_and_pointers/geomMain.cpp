/*********************************************************************
** Author:       Adam Wright
** Date:         2/28/2019
** Description:  Main method for testing the Point and LineSegment 
**               classes for project 9 in CS-161
*********************************************************************/

#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

using std::cout;
using std::endl;


int main()
{
	// Point p1(-1.5, 0.0);
	// Point p2(1.5, 4.0);
	

	Point p1(4.3, 7.52);
	Point p2(-17.0, 1.5);

	double dist = p1.distanceTo(p2);
	cout << dist << endl;

	LineSegment ls1(&p1,&p2);

	double length = ls1.length();
	double slope = ls1.slope();

	cout << length << endl;
	cout << slope << endl;

	return 0;
}