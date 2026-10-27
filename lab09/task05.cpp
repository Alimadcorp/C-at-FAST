#include<iostream>
using namespace std;

// Task 05 - Referenced swap

void swapValues(int &num1, int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int q5() {
	int a, b;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swapValues(a, b);

	cout << "After swap:\n" << "a = " << a << endl;
	cout << "b = " << b;
	cout << endl;

	return 0;
}