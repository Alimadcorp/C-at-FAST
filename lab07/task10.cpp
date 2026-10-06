#include<iostream>
using namespace std;

// Task 10 - Sorting arrays

int q10() {
	const int l = 8;
	int array[l];

	cout << "Enter " << l << " numbers separated by spaces: ";
	for (int i = 0; i < l; i++) {
		cin >> array[i];
	}

	cout << endl;

	cout << "Sorted array: ";
	for (int i = 0; i < l; i++) {
		cout << array[i] << " ";
	}

	cout << endl;
	return 0;
}