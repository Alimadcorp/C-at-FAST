#include<iostream>
using namespace std;

// Task 08 - Counter

int counter = 0;

void increment() {
	counter++;
}

int q8() {
	increment();
	increment();
	increment();
	increment();
	increment();

	cout << "Counter = " << counter;
	cout << endl;

	return 0;
}