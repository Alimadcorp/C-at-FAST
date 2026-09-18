#include <iostream>
#include <conio.h>

// Armstrong numbers 
// 9/18/2026 
// Written by Muhammad Ali 

using namespace std;

int main() {
	unsigned long input = 0, _i;

	cout << "Enter a number (enter zero to start scan): ";
	cin >> _i;
	cout << endl;

	if (_i == 0) {
		input = 1;
	}
	else {
		input = _i;
	}

	while (true) {
		unsigned long temp = input;
		int digits = 0;
		unsigned long sum = 0;

		while (temp > 0) {
			digits++;
			temp /= 10;
		}

		temp = input;
		while (temp > 0) {
			unsigned long r = temp % 10;
			unsigned long p = 1;
			for (int i = 0; i < digits; i++) {
				p *= r;
			}
			sum += p;
			temp /= 10;
		}

		if (sum == input) {
			cout << input << " is an Armstrong number" << endl;
		}
		else if (_i != 0) {
			cout << input << " isn't an Armstrong number" << endl;
		}

		if (_i == 0) {
			input++;
		}
		else {
			break;
		}
	}

	cout << "\nPress any key to exit...";
	_getch();
	return 0;
}
