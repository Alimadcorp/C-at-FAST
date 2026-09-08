#include<iostream>
using namespace std;

// Task 02 - Book Purchase Bill
// Enter price and quantity of books, display those and total bill.

int q2() {
	double rate, cost;
	int bookQty;

	cout << "Enter rate of book: ";
	cin >> rate;
	cout << "Enter amount of books purchased: ";
	cin >> bookQty;

	cost = rate * bookQty;

	cout << endl << "Your book purchase bill: \n\n";
	cout << "Rate: " << rate << endl;
	cout << "Quantity of book: " << bookQty << endl;
	cout << "Subtotal: " << cost << endl;
	cout << endl << "Total: " << cost << endl;

	return 0;
}