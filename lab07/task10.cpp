#include<iostream>
using namespace std;

// Task 10 - Safe integer menu

int q10() {
	char dig;

	cout << "Enter a numeric digit: ";
	cin >> dig;

	cout << endl;

	if (dig >= '0' && dig <= '9') {
		cout << "Oki" << endl;
	}
	else {
		cout << "Invalid input. Please enter an integer only." << endl;
	}

	return 0;
}