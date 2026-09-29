#include<iostream>
using namespace std;

// Task 01 - Print grid of starts

int q1() {
	int rows, columns;

	cout << "Enter a number of rows: ";
	cin >> rows;
	cout << "Enter a number of columns: ";
	cin >> columns;

	cout << endl;
	
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= columns; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}