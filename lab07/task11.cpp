#include<iostream>
using namespace std;

// Task 11 - Printing tables

int q11() {
	unsigned int limit;

	cout << "Enter a number: ";
	cin >> limit;

	cout << endl;

	for (int i = 1; i <= limit; i++) {
		cout << "Table of " << i << endl;
		for (int j = 1; j <= 10; j++) {
			cout << j << " * " << i << " = " << j * i << " " << endl;
		}
		cout << endl;
	}

	return 0;
}