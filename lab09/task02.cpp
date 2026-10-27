#include<iostream>
using namespace std;

// Task 02 - Max

int maxValue(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int maxValue(int num1, int num2, int num3) {
	return num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}

int q2() {
	int a, b, c;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;
	cout << "Enter a number: ";
	cin >> c;

	cout << "Max of two: " << maxValue(a, b) << endl;
	cout << "Max of three: " << maxValue(a, b, c) << endl;
	cout << endl;

	return 0;
}