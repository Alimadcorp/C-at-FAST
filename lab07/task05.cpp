#include<iostream>
using namespace std;

// Task 05 - 2nd largest distinct value

int q5() {
	const int length = 8;
	unsigned int numbers[length], max = 0, lmax = 0;

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}
	cout << endl;

	for (int i = 0; i < length; i++) {
		if (numbers[i] > max) {
			lmax = max;
			max = numbers[i];
		}
	}

	cout << "Largest: " << max;
	cout << "Second largest: " << lmax;
	cout << endl;

	return 0;
}	