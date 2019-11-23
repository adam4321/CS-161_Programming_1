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

#include <iostream>

using std::cout;
using std::endl;

void transformArray(int*& arr, int size);


int main()
{
 int* myArray = new int[3];
   myArray[0] = 4;
   myArray[1] = 2;
   myArray[2] = 5;

   transformArray(myArray, 3);

   for (int i=0; i<6; i++)
      cout << myArray[i] << endl;

   delete []myArray;

   return 0;
}