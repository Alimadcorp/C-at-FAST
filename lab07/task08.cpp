#include<iostream>
using namespace std;

// Task 08 - Array shift

int q8() {
	const int length = 7;
	int numbers[length];
	int shifted[length];

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		shifted[(i + 1) % length] = numbers[i];
	}
	for (int i = 0; i < length; i++) {
		cout << shifted[i] << " ";
	}

	cout << endl;
	return 0;
}