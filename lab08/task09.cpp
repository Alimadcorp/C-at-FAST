#include<iostream>
using namespace std;

// Task 09 - Compare strings

int q9() {
	char inp[2048], inp2[2048];

	cout << "Enter something: ";
	cin.getline(inp, 2048);
	cout << "Enter smth else: ";
	cin.getline(inp2, 2048);
	cout << endl;

	for (int i = 0; i < 2048; i++) {
		if (inp[i] == '\0') {
			if (inp2[i] != '\0') {
				cout << "Not equal";
				return 0;
			}
			break;
		}
		if (inp[i] != inp2[i]) {
			cout << "Not equal";
			return 0;
		}
	}

	cout << "Equal";
	cout << endl;

	return 0;
}