#include<iostream>
using namespace std;

// Task 01 - Addition

int add(int num1, int num2) {
	return num1 + num2;
}

int add(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}

int q1() {
	int a, b, c;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;
	cout << "Enter a number: ";
	cin >> c;

	cout << "a + b = " << add(a, b) << endl;
	cout << "a + b + c = " << add(a, b, c) << endl;
	cout << endl;

	return 0;
}