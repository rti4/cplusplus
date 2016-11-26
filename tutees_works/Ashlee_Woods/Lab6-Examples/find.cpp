/*****
 
 * find.cpp
 * n%10 = last digit
 * n%100 = last two digits
 * *****/

#include <iostream>
using namespace std;
void find(int number, int trail)
{
   int newnum;

	if((trail > 0) && 
	   (trail < 10))
	{
		if(trail == 1)
		{
			newnum = number % 10;
		}

		if(trail == 2)
		{
			newnum = number % 100;
		}

		if(trail == 3)
		{
			newnum = number % 1000;
		}

		if(trail == 4)
		{
			newnum = number % 10000;
		}

		if(trail == 5)
		{
			newnum = number % 100000;
		}

		if(trail == 6)
		{
			newnum = number % 1000000;
		}

		if(trail == 7)
		{
			newnum = number % 10000000;
		}

		if(trail == 8)
		{
			newnum = number % 100000000;
		}

		if(trail == 9)
		{
			newnum = number % 1000000000;
		}

		cout << "The " << trail << " trailing digits of " << number << " are " << newnum << ".\n";

	}

	if(trail <= 0)
	{
		cout << "The " << trail << " trailing digits of " << number << " are 0.\n";
	}

	if(trail >= 10)
	{
		cout << "Floating point exception.\n";
	}

}

