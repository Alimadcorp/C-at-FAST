#include<iostream>
using namespace std;

// Task 06 - Print alphabet triangle

int q6() {
	unsigned int size;

	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			cout << static_cast<char>('A' + (j - 1)) << " ";
		}
		cout << endl;
	}

	return 0;
}