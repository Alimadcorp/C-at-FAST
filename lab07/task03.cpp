#include<iostream>
using namespace std;

// Task 03 - Search

int q3() {
	const int length = 10;
	int numbers[length];
	int key;

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}
	cout << "Enter search key: ";
	cin >> key;

	cout << endl;

	for (int i = 0; i < length; i++) {
		if (numbers[i] == key) {
			cout << "Found at index " << i;
		}
	}

	cout << endl;

	return 0;
}