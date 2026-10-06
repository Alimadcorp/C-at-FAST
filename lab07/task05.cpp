#include<iostream>
using namespace std;

// Task 05 - Print continuously increasing numbered triangle

int q5() {
	unsigned int size;

	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			cout << (i * i - i + 2) / 2 + j - 1 << " "; 
			// using formula for continuous integer acceleration of 1 
		}
		cout << endl;
	}

	return 0;
}