#include<iostream>
using namespace std;

// Task 10 - Copy string

int q10() {
	char inp[2048], copy[2048];

	cout << "Enter something: ";
	cin.getline(inp, 2048);
	cout << endl;

	for (int i = 0; i < 2048; i++) {
		copy[i] = inp[i];
	}

	for (int i = 0; copy[i] != '\0' && i < 2048; i++) {
		cout << copy[i];
	}

	cout << endl;

	return 0;
}