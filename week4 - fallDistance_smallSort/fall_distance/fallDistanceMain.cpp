/********************************************************************* 
** Author:        Adam Wright
** Date:          1/24/2019
** Description:   A function named fallDistance that takes the falling
**                time as an argument.  The function should return the
**                distance in meters that the object has fallen in that
**                time.
*********************************************************************/ 

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

double fallDistance(double time);


int main()
{
    double time = 0;
    double distance = 0.0;

    cout << "Please enter the falling distance.\n";
    cin >> time;
    distance = fallDistance(time);

    cout << distance << endl;

    return 0;
}
