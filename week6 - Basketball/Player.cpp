/*********************************************************************
** Author:        Adam Wright
** Date:          2/8/2019
** Description:   A class called Player that has four data members:
**                a string for the player's name, and an int  for
**                each of these stats: points, rebounds and assists.
*********************************************************************/

#include <string>
#include "Player.hpp"


/*********************************************************************
** Description:   Default constructor sets that player name to a blank
**                string and sets points, rebounds, and assists to 
**                -100 to tests when the Player hasn't been instantiated
**                correctly
*********************************************************************/
Player::Player()
{
	setName("");
	setPoints(-100);
	setRebounds(-100);
	setAssists(-100);
}

/*********************************************************************
** Description:    Constructor function that takes in the player name,
**                 the player's points, rebounds, and assists
*********************************************************************/
Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn)
{
	setName(nameIn);
	setPoints(pointsIn);
	setRebounds(reboundsIn);
	setAssists(assistsIn);
}

/*********************************************************************
** Description:   Getter and setter functions for the Player class
*********************************************************************/
void Player::setName(std::string nameIn)
{
	name = nameIn;
}

std::string Player::getName()
{
	return name;
}

void Player::setPoints(int pointsIn)
{
	points = pointsIn;
}

int Player::getPoints()
{
	return points;
}

void Player::setRebounds(int reboundsIn)
{
	rebounds = reboundsIn;
}

int Player::getRebounds()
{
	return rebounds;
}

void Player::setAssists(int assistsIn)
{
	assists = assistsIn;
}

int Player::getAssists()
{
	return assists;
}

/*********************************************************************
** Description:   Function to call on a player and pass in another 
**                player as an argument to see if the argument has 
**                more points
*********************************************************************/
bool Player::hasMorePointsThan(Player playerIn)
{
	this->points = points;
	bool morePointsThan = false;

	if (points > playerIn.getPoints())
	{
		morePointsThan = true;
		return morePointsThan;
	}
}
