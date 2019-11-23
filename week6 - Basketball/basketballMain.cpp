/*********************************************************************
** Author:           Adam Wright
** Date:             2/8/2019
** Description:      Two classes Team and Player that add together to 
**                   represent a basketball team
*********************************************************************/

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Team.hpp"

using std::cout;
using std::endl;


int main()
{
	Player p1("Charlotte", 25, 10, 7);
	Player p2("Emily", 21, 13, 9);
	Player p3("Anne", 20, 10, 8);
	Player p4("Jane", 19, 10, 10);
	Player p5("Mary", 18, 11, 8);

	p5.setRebounds(12);

	Team team1(p1, p2, p3, p4, p5);

	Player p = team1.getCenter();
    
	cout << "Team one center " << p.getName() << endl;
	cout << "Team one center more points than point Guard? " << p.hasMorePointsThan(team1.getPointGuard()) << endl;
	cout << "Team one total points " << team1.totalPoints() << endl;

	return 0;
}