/*****
 * trail.cpp

 *****/

#include <iostream>
using namespace std;
void find(int number, int trail);
int main()
{
	int number;
	int trail;

	cout << "Please enter a positive integer and the number of trailing digits: ";
	cin >> number;
	cin >> trail;

	find(number, trail);
}
