#include<iostream>
using namespace std;

// Task 09 - Switch based triangle

int q9() {
	unsigned int size;
	int opt;
	
	cout << "Modes: 1) triangle 2) inverted triangle 3) number triangle" << endl;
	cout << "Enter mode (1-3): ";
	cin >> opt;
	cout << "Enter a size: ";
	cin >> size;

	cout << endl;

	switch (opt) {
	case 1:
		for (int i = 1; i <= size; i++) {
			int j = 1;
			while (j <= i) {
				cout << "* ";
				j++;
			}
			cout << endl;
		}
		break;
	case 2:
		for (int i = size; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
			cout << endl;
		}
		break;
	case 3:
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				cout << j << " ";
			}
			cout << endl;
		}
		break;
	default: cout << "Invalid input" << endl;
	}

	return 0;
}