#include<iostream>
using namespace std;

// Task 11 - Update

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

void addNumbers(int& variableToUpdate, int firstValue, int valueToAdd) {
    variableToUpdate = firstValue + valueToAdd;
}

int q11() {
	int a, b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;

	int sum = addNumbers(a, b);
	cout << "Sum: " << sum << endl;

	cout << "Original number 1: " << a << endl;
	addNumbers(a, a, b);
	cout << "Updated number 1: " << a << endl;
	cout << endl;

	return 0;
}