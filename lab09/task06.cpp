#include<iostream>
using namespace std;

// Task 06 - increment

void increaseBy(int &variable, int &increment) {
	variable += increment;
}

int q6() {
	int a, i;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value to add: ";
	cin >> i;

	increaseBy(a, i);

	cout << "a = " << a;
	cout << endl;

	return 0;
}