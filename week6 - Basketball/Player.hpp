/*********************************************************************
** Author:        Adam Wright
** Date:          2/8/2019
** Description:   A class called Player that has four data members:
**                a string for the player's name, and an int  for
**                each of these stats: points, rebounds and assists.
*********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player
{
private:
	std::string name;
	int points;
	int rebounds;
	int assists;
public:
	Player();
	Player(std::string, int, int, int);
	void setName(std::string);
	std::string getName();
	void setPoints(int);
	int getPoints();
	void setRebounds(int);
	int getRebounds();
	void setAssists(int);
	int getAssists();
	bool hasMorePointsThan(Player);
};
#endif
