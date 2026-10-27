#include<iostream>
using namespace std;

// Task 12 - Total increment

int total = 0;

void addToTotal(int &var, int increment) {
	var += increment;
}

int q12() {
	int a; 
	cout << "Enter number to add: ";
	cin >> a;
	addToTotal(total, a);
	cout << "Enter number to add: ";
	cin >> a;
	addToTotal(total, a);
	cout << "Enter number to add: ";
	cin >> a;
	addToTotal(total, a);

	cout << "Final total: " << total;
	cout << endl;

	return 0;
}