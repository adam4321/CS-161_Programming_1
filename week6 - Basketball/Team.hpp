/*********************************************************************
** Author:         Adam Wright
** Date:           2/8/2019
** Description:    A class called Team that has five data members of 
**                 type Player: a point guard, a shooting guard, a
**                 small forward, a power forward, and a center. 
*********************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include "Player.hpp"

class Team
{
private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;
public:
	Team(Player, Player, Player, Player, Player);
	void setPointGuard(Player);
	Player getPointGuard();
	void setShootingGuard(Player);
	Player getShootingGuard();
	void setSmallForward(Player);
	Player getSmallForward();
	void setPowerForward(Player);
	Player getPowerForward();
	void setCenter(Player);
	Player getCenter();
	int totalPoints();
};
#endif
