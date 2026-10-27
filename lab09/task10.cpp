#include<iostream>
using namespace std;

// Task 10 - Conversion

int convert(int minutes) {
	return minutes * 60;
}

int convert(double hours) {
	return static_cast<int>(hours * 60.0);
}

int q10() {
	int a; double b;
	cout << "Enter number of minutes: ";
	cin >> a;
	cout << "Seconds = " << convert(a) << endl;
	cout << "Enter number of hours: ";
	cin >> b;
	cout << "Minutes = " << convert(b); 

	cout << endl;

	return 0;
}