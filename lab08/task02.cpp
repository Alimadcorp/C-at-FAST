#include<iostream>
using namespace std;

// Task 02 - Count vowels

int q2() {
	char inp[2048];

	cout << "Enter something: ";
	cin.getline(inp, 2048);

	cout << endl;

	int vowels = 0, consonants = 0;
	for (int i = 0; i < 2048; i++) {
		char j = inp[i];
		if (j == '\0') break;
		if ((j >= 'A' && j <= 'Z') || (j >= 'a' && j <= 'z')) {
			if (j >= 'a') {
				j -= 'a' - 'A'; // convert to uppercase
			}
			if (j == 'A' || j == 'E' || j == 'I' || j == 'O' || j == 'U') {
				vowels++;
			}
			else consonants++;
		}
	}

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;

	cout << endl;

	return 0;
}