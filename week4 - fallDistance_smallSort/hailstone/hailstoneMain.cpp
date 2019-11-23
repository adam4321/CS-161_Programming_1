/********************************************************************* 
** Author:       Adam Wright
** Date:         1/24/2019
** Description:  A function that starts with some positive integer and
**               if that integer is even, then you divide it by two to
**               get the next integer in the sequence, but if it is odd,
**               then you multiply it by three and add one to get the
**               next integer in the sequence. 
*********************************************************************/ 

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int hailstone(int userNum);


int main()
{

    int userNum = 0;
    int steps = 0;

    cout << "Please enter a positive integer.\n";
    cin >> userNum;

    steps = hailstone(userNum);

    cout << steps << endl;

    return 0;
}
