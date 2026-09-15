#include<iostream>
using namespace std;

// Task 02 - Sum of even numbers

int q2() {
	int num, sum = 0;

	cout << "Enter a number: ";
	cin >> num;

	for (int i = 2; i <= num; i += 2) {
		sum += i;
	}

	cout << endl << "Sum of even numbers up to this number: " << sum << endl;

	return 0;
}