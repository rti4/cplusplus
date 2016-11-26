/*****
 Break the number apart and list, in reverse order, the digits separated 5 spaces, three digits per line. The rightmost digit will be printed at the top of the first column. 

 use mod and division operator.
 To get three values per line, print a line feed character after every three digits. Dont forget the final line feed to flush the output buffer.
 *****/

#include <iostream>
using namespace std;
void breakApart(int number)
{
	int y = 0;   //variable y to enter line for every three digits.
	
	while(number > 0)   // loop to read numbers
	{
		if((y == 3) ||  //if statement to enter a line every three digits
		   (y == 6) ||
		   (y == 9))
		{
			cout << "\n";
		}

		cout << "     " << number % 10 << "";  // mod number to get the last digit and print it out
		number = number / 10; //divide number by 10 to continue the loop and modnumber to keep getting  the next number
		y++; // y to tell when to enter a line
	}
	cout << "\n"; // enter line to get rid of percent sign
}

