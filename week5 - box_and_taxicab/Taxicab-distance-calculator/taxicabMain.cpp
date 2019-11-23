/*********************************************************************
** Author:        Adam Wright
** Date:          2/6/2019
** Description:   A class called Taxicab that has three int fields
**                to store its current x- and y-coordinates and the 
**                total distance it has driven so far 
*********************************************************************/

#include <iostream>
#include "Taxicab.hpp"

using std::cout;
using std::endl;


int main()
{
	Taxicab cab1;
	Taxicab cab2(5, -8);

	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);
	cout << cab1.getDistanceTraveled() << endl;
    
	cab2.moveY(7);
	cout << cab2.getYCoord() << endl;
	cout << cab2.getDistanceTraveled() << endl;

	return 0;
}