#include<iostream>
using namespace std;

// Task 08 - Find and replace

int q8() {
	char inp[2048];
	char key, with;

	cout << "Enter something: ";
	cin.getline(inp, 2048);
	cout << "Character to replace: ";
	cin >> key;
	cout << "Replace with: ";
	cin >> with;
	cout << endl;

	for (int i = 0; i < 2048; i++) {
		if (inp[i] == '\0') break;
		if (inp[i] == key) {
			inp[i] = with;
		}
		cout << inp[i];
	}

	cout << endl;

	return 0;
}