#include<iostream>
using namespace std;

// Task 04 - Print numbered triangle

int q4() {
	unsigned int size;

	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}