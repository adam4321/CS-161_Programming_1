/**********************************************************************
** Author:       Adam Wright
** Date:         1/14/2019
** Description:  A program that asks the user for five numbers and then
**               prints out the average of those numbers.
***********************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    double userNumOne;
    double userNumTwo;
    double userNumThree;
    double userNumFour;
    double userNumFive;

    double userNumAverage;

    cout << "Please enter five numbers.\n";
    cin >> userNumOne;
    cin >> userNumTwo;
    cin >> userNumThree;
    cin >> userNumFour;
    cin >> userNumFive;

    userNumAverage = userNumOne + userNumTwo + userNumThree + userNumFour + userNumFive;
    userNumAverage = userNumAverage / 5;

    cout << "The average of those numbers is:\n";
    cout << userNumAverage << endl;

    return 0;
}
