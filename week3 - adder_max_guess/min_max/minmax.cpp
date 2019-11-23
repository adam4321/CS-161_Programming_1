/********************************************************************* 
** Author:           Adam Wright
** Date:             1/22/2019
** Description:      Program that asks the user how many integers they  
**                   would like to enter and then prompts the user to 
**                   enter that number of integers and then displays 
**                   the smallest and largest of those numbers.
*********************************************************************/ 

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int numOfInts;              // User entered number of integers
    int counterInt = 0;         // Loop counter
    int inputInt;               // Variable to hold the entered ints
    int maxInt = -2147483647;   // Max set to minimum possible value
    int minInt = 2147483647;    // Min set to maximum possible value

    // Prompt the user for an integer and store it in numOfInts
    cout << "How many integers would you like to enter?\n";
    cin >> numOfInts;
    cout << "Please enter " << numOfInts << " integers.\n";

    // Loop while under number of integers value
    while (counterInt < numOfInts)
    {
        counterInt += 1;
        cin >> inputInt;

        // Replace max with highest entered value
        if (inputInt > maxInt)
        {
            maxInt = inputInt;
        }

        // Replace min with lowest entered value
        if (inputInt < minInt)
        {
            minInt = inputInt;
        }
    }

    // Output the min and max integers with strings describing them
    cout << "min: " << minInt << endl;
    cout << "max: " << maxInt << endl;

    return 0;
}
