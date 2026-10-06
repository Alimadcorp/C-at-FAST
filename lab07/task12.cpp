#include<iostream>
using namespace std;

// Task 12 - Duplicates check
// Display each value that appears more than once.
// Print each duplicate value only once.
// no libraries

int q12() {
	const int length = 8;
	int numbers[length];

	cout << "Enter " << length << " numbers separated by spaces: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}

	cout << endl;

	cout << "Duplicates: ";
	for (int i = 0; i < length - 1; i++) { // run upto length - 1 becoz we do not want index out of bounds typa errors
		// check if it has already been printed
		bool skipIteration = false;
		for (int j = 0; j < i; j++) {
			if (numbers[i] == numbers[j]) {
				skipIteration = true; // do this to skip outer loop too
				continue; // do not print and skip this iteration
			}
		}
		if (skipIteration) continue;

		// check if it has a duplicate
		for (int j = i + 1; j < length; j++) {
			if (numbers[i] == numbers[j]) {
				cout << numbers[i] << " "; // print the duplicate :P
				break; // dont print if it has many occurences
			}
		}
	}

	cout << endl;
	return 0;
}