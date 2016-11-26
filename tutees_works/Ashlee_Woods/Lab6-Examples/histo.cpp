/******
 * histo.cpp
 * *****/

#include <iostream>
using namespace std;
int find_max(int a, int b, int c, int d, int f);
int main()
{
	int a;
	int b;
	int c;
	int d;
	int f;
	int max;
	int firstMax;
	int i = 0;

	cout << "Please enter five integers: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> f;
	cout << "\n";
    
	find_max(a, b, c, d, f);

	firstMax = find_max(a, b, c, d, f);

	for(i = 0; i < firstMax; i++)
	{
	max = find_max(a, b, c, d, f);

	if (a >= max)
	{

	   cout << "    *    ";
	   a--;
	}
	else
	{
	   cout << "         ";
	}
	
	if(b >= max)
	{
		cout << "*    ";
		b--;
	}
	else
	{
		cout << "     ";
	}

	if(c >= max)
	{
		cout << "*    ";
		c--;
	}
	else
	{
		cout << "     ";
	}

	if(d >= max)
	{
		cout << "*    ";
		d--;
	}

	else
	{
		cout << "     ";
	}

	if(f >= max)
	{
		cout << "*    \n";
		f--;
	}
	else
	{
		cout << "    \n";
	}

	}

	cout << "  =========================""\n";
	cout << "    A    B    C    D    F  ""\n\n";
}

