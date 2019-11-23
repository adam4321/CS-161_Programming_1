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


Person::Person(std::string name, double age)
{
	personName = name;
	personAge = age;
}

std::string Person::getName()
{
	return personName;
}

double Person::getAge()
{
	return personAge;
}