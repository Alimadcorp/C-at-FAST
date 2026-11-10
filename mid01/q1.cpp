#include<iostream>
using namespace std;

// 13 October 2026
// Q1: Zigzag number detection
// Attempted by 26L-0732 Muhammad Ali

int main() {
	// declaration and input
	long long int number = -1, copy, pow = 1;
	cout << "Enter a positive number: ";
	cin >> number;
	copy = number; // store a copy for later use
	cout << endl;

	// processing
	int lNumber = number % 10; // previous digit
	number /= 10;
	char exp = 'n'; // expectations (n = none, r = we are expecting a rise, d = we are expecting a drop in the next digit)
	while (number > 0) { // backward digit loop
		// while it's not zero, keep selecting next digit and comparing
		int n = number % 10; // get trailing digit
		if (n > lNumber)	// if the current digit is greater than the last digit
		{
			// we were either expecting a rise or nothing
			if (exp == 'n' || exp == 'r') {
				exp = 'd'; // next digit should be a drop
			}
			else {
				// the number did not make it up to our expectations, output and halt
				cout << "Number is not a zigzag number." << endl;
				return 0;
			}
		}
		else if (n < lNumber) {
			// we were either expecting a drop or nothing
			if (exp == 'n' || exp == 'd') {
				exp = 'r'; // next digit should be a rise
			}
			else {
				// the number did not make it up to our expectations, output and halt
				cout << "Number is not a zigzag number." << endl;
				return 0;
			}
		}
		else { // two digits must be equal
			cout << "Number is not a zigzag number coz neighboring digits are equal." << endl;
			return 0;
		}
		lNumber = n; // update last digit
		number /= 10; // divide by ten so next loop, the next digit gets selected
		pow *= 10; // after this loop, power will equal the integer common log of the number
	}

	// output
	cout << copy << " is a zigzag number because ";
	lNumber = copy / pow;
	cout << lNumber;
	pow /= 10;
	while (pow > 0) { // forward digit loop
		int n = (copy / pow) % 10; // get last digit of the first pow digits of the number (aka get the pow'th digit)
		if (lNumber < n) {
			cout << " < ";
		}
		else { // do not check lNumber < n as we are already sure this is a zigzag number
			cout << " > ";
		}
		cout << n;
		lNumber = n;
		pow /= 10;
	}

	cout << endl;
	return 0;
}