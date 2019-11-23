/***********************************************************************************
** Author:               Adam Wright
** Date:                 1/14/2019
** Description:          A program that asks the user for an integer number of cents,
**                       from 0 - 99, and then outputs how many of each type of coin 
**                       would represent that amount with the fewest total number
**                       of coins.
***********************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int centsInput;

    int quarters;
    int dimes;
    int nickels;
    int pennys;

    cout << "Please enter an amount in cents less than a dollar.\n";
    cin >> centsInput;

    quarters = centsInput / 25;
    centsInput = centsInput % 25;

    dimes = centsInput / 10;
    centsInput = centsInput % 10;

    nickels = centsInput / 5;
    centsInput = centsInput % 5;

    pennys = centsInput;

    cout << "Your change will be:\n";
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennys << endl;

    return 0;
}
