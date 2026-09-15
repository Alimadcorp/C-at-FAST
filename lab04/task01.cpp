#include<iostream>
using namespace std;

// Task 01 - Print squares

int q1() {
	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << endl;
	
	for (int i = 1; i <= num; i++) {
		cout << i * i << endl;
	}
	
	return 0;
}