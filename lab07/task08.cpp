#include<iostream>
using namespace std;

// Task 08 - Print diamond

int q8() {
	unsigned int size;

	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size - i; j++) { cout << " "; }
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = size - 1; i >= 1; i--) {
		for (int j = 1; j <= size - i; j++) { cout << " "; }
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}