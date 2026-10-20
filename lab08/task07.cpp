#include<iostream>
using namespace std;

// Task 07 - Word stats

int q7() {
	char inp[2048];

	cout << "Enter something: ";
	cin.getline(inp, 2048);

	cout << endl;

	int words = 0;
	for (int i = 0; i < 2048; i++) {
		if (inp[i] == '\0') break;
		if (inp[i] == ' ' && (inp[i + 1] == '\0' || inp[i + 1] != ' ')) {
			words++;
		}
	}

	cout << "Words: " << words << endl;

	cout << endl;

	return 0;
}