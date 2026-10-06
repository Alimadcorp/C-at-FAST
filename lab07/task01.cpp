#include<iostream>
using namespace std;

// Task 01 - Array tasks

int q1() {
	int sum = 0, min = 2147483647, max = -2147483648;
	const int length = 10;
	int numbers[length];

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}

	cout << endl;
	
	for (int i = 0; i < length; i++) {
		sum += numbers[i];
		if (numbers[i] < min) {
			min = numbers[i];
		}
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}

	cout << "Sum: " << sum << endl;
	cout << "Average: " << sum / length << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	cout << endl;

	return 0;
}