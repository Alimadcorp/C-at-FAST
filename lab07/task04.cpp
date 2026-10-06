#include<iostream>
using namespace std;

// Task 04 - Values above average

int q4() {
	const int length = 8;
	int numbers[length], sum = 0, avg, nums = 0;

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}
	cout << endl;
	avg = sum / length;

	for (int i = 0; i < length; i++) {
		if (numbers[i] > avg) {
			nums++;
		}
	}

	cout << "Greater than average: " << nums;
	cout << endl;

	return 0;
}