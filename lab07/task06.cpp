#include<iostream>
using namespace std;

// Task 06 - Frequency

int q6() {
	const int length = 10;
	int numbers[length];
	int key, count = 0;

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}
	cout << "Enter search key: ";
	cin >> key;

	cout << endl;

	for (int i = 0; i < length; i++) {
		if (numbers[i] == key) {
			count++;
		}
	}

	cout << "Found " << count << " many times";
	cout << endl;

	return 0;
}