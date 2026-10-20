#include<iostream>
using namespace std;

// Task 01 - String stats

int q1() {
	char inp[101];

	cout << "Enter something: ";
	cin.getline(inp, 101);

	cout << endl;
	
	int l = 0, up = 0, low = 0, digit = 0, spaces = 0;
	for (int i = 0; i < 101; i++) {
		if (inp[i] == '\0') break;
		l++;
		if (inp[i] >= 'A' && inp[i] <= 'Z') up++;
		else if (inp[i] >= 'a' && inp[i] <= 'z') low++;
		else if (inp[i] >= '0' && inp[i] <= '9') digit++;
		else if (inp[i] == ' ') spaces++;
	}

	cout << "Length: " << l << endl;
	cout << "Uppercase: " << up << endl;
	cout << "Lowercase: " << low << endl;
	cout << "Digits: " << digit << endl;
	cout << "Spaces: " << spaces << endl;

	cout << endl;

	return 0;
}