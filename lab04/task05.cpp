#include<iostream>
using namespace std;

// Task 05 - Number guessing with limited attempts

int q5() {
	unsigned int num; // garbage is random
    num = (num * 1103515245 + 12345);
    num = (num % 900) + 100; // make it 3 digit

	for (int i = 0; i < 3; i++) {
		unsigned int guess;
		cout << "Guess the number: ";
		cin >> guess;
		if (guess == num) {
			cout << endl << "Guessed it right!" << endl;
			return 0;
		}
	}

	cout << endl << "Out of attempts" << endl;
	return -1;
}