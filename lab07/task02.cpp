#include<iostream>
using namespace std;

// Task 02 - Reverse print

int q2() {
	const int length = 8;
	int numbers[length];

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}

	cout << endl;

	for (int i = 7; i >= 0; i--) {
		cout << numbers[i] << " ";
	}

	cout << endl;

	return 0;
}