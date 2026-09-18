#include<iostream>
#include<conio.h>

// Decimal to binary converter
// 9/18/2026
// Written by Muhammad Ali
// Input range: 0 - 4294967295 (2 ^ 32)

using namespace std;
int main() {
    unsigned long input = 0; 
    unsigned long pow = 2147483648; // 2 ^ 31
	short f = 0; // whether or not the first 1 has been found

    cout << "Enter a number: ";
    cin >> input;
    cout << endl;

    for (int i = 32; i > 0; i--) { // dividing 2 ^ 31 by 2, 32 times will end up at 1
        if (input >= pow) { // if input divisible by power of 2
            cout << "1";
            input -= pow; // subtract that power of 2
			f = 1; // first 1's been found
		}
		else {
			if (f || i == 0) cout << "0"; // output zero if there is a 1 behind it, or if this is the last digit
        }
        pow /= 2; // divide pow by 2
    }

	_getch();

    return 0;
}