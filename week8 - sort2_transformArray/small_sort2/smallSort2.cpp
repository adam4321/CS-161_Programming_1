/***********************************************************************   
** Author:       Adam Wright
** Date:         2/24/2019
** Description:  A function that takes three int parameters by pointer
**               and sorts their values into ascending order, so that
**               the first parameter now has the lowest value, the second
**               parameter the middle value, and the third parameter
**               has the highest value.
************************************************************************/

void smallSort2(int *first, int *second, int *third)
{
    // Define temporary variable
    int temp;

    // Check if first or second is larger
    if (*first > *second)
    {
        temp = *first;    //store in temp
        *first = *second; //swap
        *second = temp;
    }

    // Check if second or third is larger
    if (*second > *third)
    {
        temp = *second;   //store in temp
        *second = *third; //swap
        *third = temp;
    }

    // Check first and second again
    if (*first > *second)
    {
        temp = *first;    //store in temp
        *first = *second; //swap
        *second = temp;
    }
}
