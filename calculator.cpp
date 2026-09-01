#include<iostream>
using namespace std;

// Task 3: C++ Arithmetic Calculator
// Written by Muhammad Ali
// 9/1/2026

// Input two integer numbers from the user.
// Calculate and display sum, difference, product, integer division, and remainder.

int calculator() {
	long n1, n2; // number 1 and 2

	cout << endl << "  Arithmetic calculator" << endl;
	cout << "  Enter a number: ";
	cin >> n1;
	cout << "  Enter another number: ";
	cin >> n2;

	if (n1 == 0 && n2 == 0) { cout << endl << "  All results are zero."; return 0; }

	cout << endl << endl << "  --- Results ---" << endl << endl;
	cout << "  Sum = " << n1 + n2 << endl;
	cout << "  Difference = " << n1 - n2 << endl;
	cout << "  Product = " << n1 * n2 << endl;
	cout << "  Ratio = " << n1 / n2 << endl;
	cout << "  Remainder = " << n1 % n2 << endl;

	cout << endl << "  End of task" << endl << endl;
	return 0;
}