/*********************************************************************
** Author:          Adam Wright
** Date:            2/14/2019
** Description:     A function called findMedian that takes two 
**                  parameters, an array of int and the size of the
**                  array and returns the median value.
*********************************************************************/

#include <algorithm>

double findMedian(int arr[], int size)
{
    double median = 0.0;

    // Call the array sort function
    std::sort(arr, arr + size);

    // Check if the array has an odd length and select single center value
    if (size % 2 != 0)
    {
        int center = (size / 2); // Integer arithemetic returns middle element
        median = arr[center];    // Set the middle value as the median
    }

    // If its an even length array there are 2 center values to average
    else
    {
        int firstCenter = (size / 2) - 1;  // Integer arithemetic - 1
        int secondCenter = (size / 2);     // Integer arithemetic

        // Floating point average
        median = (arr[firstCenter] + arr[secondCenter]) / 2.0;
    }

    return median;
}