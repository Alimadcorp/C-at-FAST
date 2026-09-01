#include<iostream>
#include<conio.h>
using namespace std;

// Written by Muhammad Ali
// 9/1/2026
// As there were issues with multiple files, this code exists to launch the needed one

int student();
int calculator();

int main() {
	start: 
	int target = 0;
	cout << endl << "Enter task number (2-3): ";
	cin >> target;
	switch (target) {
	case 2: student(); break;
	case 3: calculator(); break;
	}

	cout << endl << "Press or g to select different task, press any other key to exit. ";
	char o = _getche();
	if (o == 'g' || o == 'G') goto start;
	cout << "Quitting...";
	return 0;
}