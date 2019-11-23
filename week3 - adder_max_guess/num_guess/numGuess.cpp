/********************************************************************* 
** Author:         Adam Wright
** Date:           1/20/2019
** Description:    A program that prompts the user for an integer that
**                 that the user will try to guess. 
*********************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main()
{
    int numToGuess;        // Player entered number to guess
    int inputGuess;        // Holds the currently guessed number
    int numOfLoops = 0;    // Loop counter

    // Prompt the user for an int and then prompt them to guess the int
    cout << "Enter the number for the player to guess.\n";
    cin >> numToGuess;
    cout << "Enter your guess.\n";

    // While loop until the player hits the guess
    while (inputGuess != numToGuess)
    {
        cin >> inputGuess;
        numOfLoops += 1;

        // If the number is too high or low then prompt the user
        if (inputGuess > numToGuess)
        {
            cout << "Too high - try again.\n";
        }

        if (inputGuess < numToGuess)
        {
            cout << "Too low - try again.\n";
        }
    }

    // Tell the user when they win and the number of tries that it took
    cout << "You guessed it in " << numOfLoops << " tries.\n";

    return 0;
}
 
