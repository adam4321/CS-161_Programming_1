/***********************************************************************   
** Author:       Adam Wright
** Date:         1/24/2019
** Description:  A function that takes three int parameters by reference
**               and sorts their values into ascending order, so that
**               the first parameter now has the lowest value, the second
**               parameter the middle value, and the third parameter
**               has the highest value.
************************************************************************/


void smallSort(int &first, int &second, int &third)
{
    int temp = 0; //define temporary variable

    // Check if first or second is larger
    if (first > second)
    {
        temp = first;     // Store in temp
        first = second;   // Swap
        second = temp;
    }

    // Check if second or third is larger
    if (second > third)
    {
        temp = second;    // Store in temp
        second = third;   // Swap
        third = temp;
    }

    // Check first and second again
    if (first > second)
    {
        temp = first;     // Store in temp
        first = second;   // Swap
        second = temp;
    }
}
