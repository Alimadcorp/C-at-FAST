#include<iostream>
#include<math.h>
using namespace std;

// Task 03 - Product of first N numbers

int q3() {
	int num, product = 1;

	cout << "Enter a number: ";
	cin >> num;
	num = abs(num);

	for (int i = 1; i <= num; i++) {
		product = i * product;
	}

	cout << "Product: " << product << endl;

	return 0;
}