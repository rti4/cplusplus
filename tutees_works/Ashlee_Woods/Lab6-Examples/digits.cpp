/******
 
 
input: enter a positive integer (up to 9 digits)
output: integer reversed! in columns of three and rows of three
*****/

#include <iostream>
using namespace std;
void breakApart(int number);
int main()
{ 
	int number;
	
	cout << "Enter a positive integer (up to 9 digits): \n";
	cin >> number;

	if(number > 2147483647) // check for errors
	{
		return 0;
	}
	
	breakApart(number); //call function breakApart 
}

