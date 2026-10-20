#include<iostream>
using namespace std;

// Task 11 - Remove spaces

int q11() {
	char inp[2048];

	cout << "Enter something: ";
	cin.getline(inp, 2048);
	cout << endl;

	for (int i = 0; i < 2048 && inp[i] != '\0'; i++) {
		if (inp[i] == ' ') {
			for (int j = i; j < 2048 && inp[j] != '\0'; j++) {
				inp[j] = inp[j + 1];
			}
			i--;
		}
	}

	for (int i = 0; i < 2048 && inp[i] != '\0'; i++) {
		cout << inp[i];
	}

	cout << endl;

	return 0;
}