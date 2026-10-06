#include<iostream>
using namespace std;

// Task 09 - Ripple delete

int q9() {
	const int length = 8;
	int numbers[length];
	int rm = 0;

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}
	
	cout << "Enter index to remove: ";
	cin >> rm;
	cout << endl;

	for (int i = rm; i < length - 1; i++) {
		numbers[i] = numbers[i + 1];
	}
	for (int i = 0; i < length - 1; i++) {
		cout << numbers[i] << " ";
	}

	cout << endl;
	return 0;
}