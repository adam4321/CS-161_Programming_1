/*********************************************************************
** Author:         Adam Wright
** Date:           2/14/2019
** Description:    A class called Person that has two data members,
**                 a string variable called name and a double variable
**                 called age. It has get methods for both data
**                 members (getName and getAge)
*********************************************************************/

#include "Person.hpp"
#include <string>
#include <iostream>

using std::cout;
using std::endl;

double stdDev(Person p[], int size);


int main()
{
	const int NUM_PERSONS = 5;
	double deviation = 0;
	Person p1("amy", 18);
    
	cout << "Person 1's name is " << p1.getName() << endl;
	cout << "Person 1's age is " << p1.getAge() << endl;

    // Array of test objects
	Person person[NUM_PERSONS] = { Person("Jane", 23),
								   Person("Bob", 25),
								   Person("Andy", 12),
								   Person("Mary", 39),
								   Person("Tim", 13) };

	deviation = stdDev(person, NUM_PERSONS);

	cout << "The standard deviation in the group's ages is " << deviation << endl;
	cout << person[2].getName() << "'s age is " << person[2].getAge() << endl;

	return 0;
}