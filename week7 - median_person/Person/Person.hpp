/*********************************************************************
** Author:         Adam Wright
** Date:           2/14/2019
** Description:    A class called Person that has two data members,
**                 a string variable called name and a double variable
**                 called age. It has get methods for both data
**                 members (getName and getAge)
*********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP	

#include <string>

class Person
{
private:
	std::string personName;
	double personAge;
public:
	Person(std::string, double);
	std::string getName();
	double getAge();
};
#endif

