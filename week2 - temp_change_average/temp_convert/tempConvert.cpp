/***************************************************************************
** Author:            Adam Wright
** Date:              1/14/2019
** Description:       A program that converts Celsius temperatures to
**                    Fahrenheit temperatures.
***************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    double celsiusTemp;
    double fahrenheitTemp;

    cout << "Please enter a Celsius temperature.\n";
    cin >> celsiusTemp;

    fahrenheitTemp = (celsiusTemp * 9 / 5) + 32;
    cout << "The equivalent Fahrenheit temperature is:\n";
    cout << fahrenheitTemp << endl;

    return 0;
}
