/*********************************************************************
** Author:        Adam Wright
** Date:          2/6/2019
** Description:   A class called Taxicab that has three int fields
**                to store its current x- and y-coordinates and the
**                total distance it has driven so far
*********************************************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP	

class Taxicab
{
private:
	int xCord;
	int yCord;
	int distance;
public:
	Taxicab();
	Taxicab(int, int);
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);
};
#endif
