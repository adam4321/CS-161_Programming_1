/********************************************************************* 
** Author:         Adam Wright
** Date:           2/14/2019
** Description:    A function called stdDev that takes two arguments
**                 a Person object array and the array size. The function
**                 calculates and returns the standard deviation for 
**                 the ages of the objects in the array by calling getAge().
*********************************************************************/ 

#include "Person.hpp"
#include <string>
#include <cmath>

double stdDev(Person p[], int size)
{
	double deviation = 0.0;
	double mean = 0.0;

    // Add up the ages of the Person instances
	for (int i = 0; i < size; i++)
	{
		mean += p[i].getAge();
	}

    // Divide by the array size to get the mean
	mean = mean / size;

	for (int i = 0; i < size; i++)
	{
		double temp = 0.0;    // Create a temp variable to hold the age each loop

		temp = p[i].getAge() - mean;    // Subtract mean from each age
		temp = temp * temp;             // Square each age
		deviation += temp;              // Move the value into deviation
	}

	deviation = deviation / size;      // Divide deviation by the array size
	deviation = sqrt(deviation);       // Square root to get final standard deviation

    return deviation;
}