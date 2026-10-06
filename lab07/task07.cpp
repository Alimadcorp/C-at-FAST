#include<iostream>
using namespace std;

// Task 07 - Odd vs Even

int q7() {
	const int length = 12;
	int numbers[length];
	int odd = 0, even = 0;
	int oddS = 0, evenS = 0;

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		if (numbers[i] % 2 == 0) {
			even++;
			evenS += numbers[i];
		}
		else {
			odd++;
			oddS += numbers[i];
		}
	}

	cout << "Even: " << even << endl << "Odd: " << odd << endl;
	cout << "Even Sum: " << evenS << endl << "Odd Sum: " << oddS << endl;
	cout << endl; 

	return 0;
}