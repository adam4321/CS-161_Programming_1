/*********************************************************************
** Author:          Adam Wright
** Date:            2/14/2019
** Description:     A function called findMedian that takes two
**                  parameters, an array of int and the size of the
**                  array and returns the median value.
*********************************************************************/

#include <iostream>

using std::cout;
using std::endl;

double findMedian(int arr[], int size);


int main()
{
	const int SIZE	= 8;
    double median = 0.0;

    // Array of ints for testing
	int inputArr[SIZE] = { -1,2,1,3,5,4,20,0 };

	median = findMedian(inputArr, SIZE);
	cout << "This is the median value: " << median << endl;

    return 0;
}