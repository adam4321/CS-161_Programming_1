/*********************************************************************
** Author:         Adam Wright
** Date:           2/8/2019
** Description:    A class called Team that has five data members of
**                 type Player: a point guard, a shooting guard, a
**                 small forward, a power forward, and a center.
*********************************************************************/

#include <string>
#include "Team.hpp"
#include "Player.hpp"


/*********************************************************************
** Description:   Team constructor function that takes in 5 players 
**                from the Player class to create a full basketball 
**                team object
*********************************************************************/
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	setPointGuard(p1);
	setShootingGuard(p2);
	setSmallForward(p3);
	setPowerForward(p4);
	setCenter(p5);
}

/*********************************************************************
** Description:   Getter and setter functions for the Team class
*********************************************************************/
void Team::setPointGuard(Player p1)
{
	pointGuard = p1;
}

Player Team::getPointGuard()
{
	return pointGuard;
}

void Team::setShootingGuard(Player p2)
{
	shootingGuard = p2;
}

Player Team::getShootingGuard()
{
	return shootingGuard;
}

void Team::setSmallForward(Player p3)
{
	smallForward = p3;
}

Player Team::getSmallForward()
{
	return smallForward;
}

void Team::setPowerForward(Player p4)
{
	powerForward = p4;
}

Player Team::getPowerForward()
{
	return powerForward;
}

void Team::setCenter(Player p5)
{
	center = p5;
}

Player Team::getCenter()
{
	return center;
}

/*********************************************************************
** Description:    Function to return the total points from an instance
**                 of the Team class
*********************************************************************/
int Team::totalPoints()
{
	int totalPoints = 0;

	totalPoints += pointGuard.getPoints();
	totalPoints += shootingGuard.getPoints();
	totalPoints += smallForward.getPoints();
	totalPoints += powerForward.getPoints();
	totalPoints += center.getPoints();

	return totalPoints;
}
