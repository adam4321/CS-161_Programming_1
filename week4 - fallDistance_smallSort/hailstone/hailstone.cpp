/********************************************************************* 
** Author:       Adam Wright
** Date:         1/24/2019
** Description:  A function that starts with some positive integer and
**               if that integer is even, then you divide it by two to
**               get the next integer in the sequence, but if it is odd,
**               then you multiply it by three and add one to get the
**               next integer in the sequence. 
*********************************************************************/ 


int hailstone(int userNum)
{
    // Variable to hold the number of steps it takes
    int steps = 0;

    // Only loop if the number is larger than 1
    while (userNum > 1)
    {
        if ((userNum % 2) == 0)     // Check if the number is even
        {
            userNum = userNum / 2;
        }
        else
        {
            userNum = (userNum * 3) + 1;
        }

        steps += 1;     // Count the number of steps
    }

    return steps;       // Return the number of steps
}
