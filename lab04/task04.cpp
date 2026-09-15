#include<iostream>
using namespace std;

// Task 04 - Repeated price input

int q4() {
	double bill = 0;

	for (int i = 0; i < 5; i++) {
		double price;
		cout << "Enter price of item " << i + 1 << ": ";
		cin >> price;
		bill += price;
	}

	cout << endl << "Total cost: " << bill << endl;

	return 0;
}