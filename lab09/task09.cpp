#include<iostream>
using namespace std;

// Task 09 - Scopes

int counterr = 67;

void printValue() {
	cout << "Counter (by function) = " << counterr << endl;
}

int q9() {
	int counterr = 26;

	cout << "Counter (by main) = " << counterr << endl;
	printValue();
	cout << endl;

	return 0;
}