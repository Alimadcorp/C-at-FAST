#include<iostream>
using namespace std;

// Task 05 - Palindrome check

int q5() {
	char inp[2048];
	int m = 0; bool pal = true;

	cout << "Enter something: ";
	cin.getline(inp, 2048);

	cout << endl;

	while (inp[m] != '\0') m++;
	for (int i = 0; i < m / 2; i++) {
		if (inp[i] != inp[m - i - 1]) {
			pal = false;
			break;
		}
	}

	if (pal) cout << "Palindrome";
	else cout << "Not palindrome";

	cout << endl;

	return 0;
}