#include<iostream>
using namespace std;

// Task 03 - Display

void display(int integer) {
	cout << integer << endl;
}

void display(double doubleNumber) {
	cout << doubleNumber << endl;
}

int q3() {
	int a; double c;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number (dbl): ";
	cin >> c;

	display(a);
	display(c);
	cout << endl;

	return 0;
}