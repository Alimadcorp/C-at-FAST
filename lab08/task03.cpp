#include<iostream>
using namespace std;

// Task 03 - Keyfinder

int q3() {
	char inp[2048];
	char key;
	bool notFound = true;

	cout << "Enter something: ";
	cin.getline(inp, 2048);
	cout << "Character to find: ";
	cin >> key;

	cout << endl;

	int vowels = 0, consonants = 0;
	for (int i = 0; i < 2048; i++) {
		char j = inp[i];
		if (j == '\0') break;
		if (j == key) {
			notFound = false;
			cout << "Found at index " << i << endl;
		}
	}

	if (notFound) {
		cout << "Not found";
	}

	cout << endl;

	return 0;
}