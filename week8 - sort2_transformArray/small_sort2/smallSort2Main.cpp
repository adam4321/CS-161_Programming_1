/***********************************************************************   
** Author:       Adam Wright
** Date:         2/24/2019
** Description:  A function that takes three int parameters by pointer
**               and sorts their values into ascending order, so that
**               the first parameter now has the lowest value, the second
**               parameter the middle value, and the third parameter
**               has the highest value.
************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

void smallSort2(int *first, int *second, int *third);


int main()
{
  int first = 0;
  int second = 0;
  int third = 0;

  cout << "Please enter three integers.\n";
  cin >> first >> second >> third;

  smallSort2(&first, &second, &third);
  
  cout << first << " " << second << " " << third << endl;

  return 0;
}
