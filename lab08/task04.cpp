#include<iostream>
using namespace std;

// Task 04 - Reverse string

int q4() {
	char inp[2048];
	int m = 0;

	cout << "Enter something: ";
	cin.getline(inp, 2048);

	cout << endl;
	
	while (inp[m] != '\0') m++; 
	for (int i = m; i >= 0; i--) {
		cout << inp[m];
	}

	cout << endl;

	return 0;
}