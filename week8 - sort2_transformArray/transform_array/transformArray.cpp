/*********************************************************************** 
** Author:        Adam Wright
** Date:          2/25/2019
** Description:   A void function called transformArray that takes two
**                parameters - a reference to a pointer to a dynamically
**                allocated array of ints, and the size of that array.
**                The function dynamically allocates an array that is 
**                twice as long, filled with the values from the
**                original array followed by each of those values times 2. 
***********************************************************************/

void transformArray(int*& arr, int size)
{
    // Variables to hold the new array size and the new dynamic array
	int changeSize = size * 2;
	int* changeArr = new int[changeSize];

	// Pass the original array values into the new array
	for (int i = 0; i < size; i++)
	{
		changeArr[i] = arr[i];
	}

	// Set the doubled values into the second half of the new array
	for (int i = size; i < changeSize; i++)
	{
		changeArr[i] = arr[i - size] * 2;
	}

	// Free the original array memory
	delete []arr;

	// Assign the new array to the pointer
	arr = changeArr;
}