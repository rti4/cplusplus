/*******
 * circle.cpp
 * void circle(radius)

 * find area with radius
 * *****/

#include <iostream>
#include <iomanip>
using namespace std;
void circle(double radius)
{
	double area;

	area = (radius * radius) * 3.14159;

	cout << "The area of the circle is " << fixed << setprecision (3) << area << ".\n\n";
}

