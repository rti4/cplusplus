/******
 * triangle.cpp
 * void triangle(height, base)
 * find area of triangle
 ******/

#include <iostream>
#include <iomanip>
using namespace std;
void triangle(double height, double base)
{
	double triarea;

	triarea = (height / 2) * base;

	cout << "The area of the triangle is " << fixed << setprecision (3) << triarea << ".\n\n";
}

