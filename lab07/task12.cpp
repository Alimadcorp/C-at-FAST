#include<iostream>
using namespace std;

// Task 12 - Print palindrome triangle

int q12() {
	unsigned int size;

	cout << "Enter amount of rows: ";
	cin >> size;

	cout << endl;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		for (int j = i - 1; j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}