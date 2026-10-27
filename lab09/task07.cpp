#include<iostream>
using namespace std;

// Task 07 - Divide

void divide(int divident, int divisor, int &outD, int &outR) {
	if (divisor == 0) return;
	outD = divident / divisor;
	outR = divident % divisor;
}

int q7() {
	int a, b, outD, outR;
	cout << "Enter dividend: ";
	cin >> a;
	cout << "Enter divisor: ";
	cin >> b;

	divide(a, b, outD, outR);

	cout << "Result = " << outD << endl;
	cout << "Remainder = " << outR;
	cout << endl;

	return 0;
}