#include<iostream>
using namespace std;

// Task 04 - Rectangle and Square Calculator
// Input length and width, output area of a rectangle.

int q4() {
	double length, width, area, areaSum = 0;
beninging:
	char i = ' ';

	cout << "Enter width of a rectangle: ";
	cin >> width;
	cout << "Enter length of the rectangle: ";
	cin >> length;

	areaSum += area = length * width;

	cout << endl << "Area of this rectangle: " << area << endl;
	cout << "Summed area: " << areaSum << endl;
	cout << endl << "Enter n to calculate new area: ";
	
	cin >> i;
	if (i == 'n') { goto beninging; }

	return 0;
}