#include<iostream>
using namespace std;

// Task 02 - Print triangle

int q2() {
	unsigned int size;

	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	int i = 1;
	while (i <= size) {
		int j = 1;
		while (j <= i) {
			cout << "* ";
			j++;
		}
		cout << endl;
		i++;
	}

	return 0;
}