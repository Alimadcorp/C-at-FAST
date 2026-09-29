#include<iostream>
using namespace std;

// Task 03 - Print inverted triangle

int q3() {
	unsigned int size;

	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	for (int i = size; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}