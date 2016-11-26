/******
 
 * geometry.cpp
 * Geometry calculator to determine the area of a specific figure.
 
 * *****/

#include <iostream>
using namespace std;
void rectangle(double length, double width);
void circle(double radius);
void triangle(double height, double base);
int main()
{

	char input;
	double length;
	double width;
	double radius;
	double base;
	double height;



	cout << "Calculate the area of one of the following:\n";
	cout << "      Rectangle  (enter r or R)\n";
	cout << "      Circle     (enter c or C)\n";
	cout << "      Triangle   (enter t or T)\n";

	cin >> input;
	cout << "\n";

	if(input != 'r' && 
	   input != 'R' &&
	   input != 'c' &&
	   input != 'C' &&
	   input != 't' &&
	   input != 'T')
	{
		cout << "Calculate the area of one of the following:\n";
		cout << "      Rectangle  (enter r or R)\n";
		cout << "      Circle     (enter c or C)\n";
		cout << "      Triangle   (enter t or T)\n";
	}

		
	if(input == 'r' || input == 'R')
	{
		cout << "Enter the length and width of the rectange in units: ";
		cin >> length >> width;
		cout << "\n";
		rectangle(length, width);
	}

	if(input == 'c' || input == 'C')
	{
		cout << "Enter the radius of the circle in units: ";
		cin >> radius;
		cout << "\n";
		circle(radius);
	}

	if(input == 't' || input == 'T')
	{
		cout << "Enter the height and base of the triangle in units: ";
		cin >> height >> base;
		cout << "\n";
		triangle(height, base);
	}
}
	
