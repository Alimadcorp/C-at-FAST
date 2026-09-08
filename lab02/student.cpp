#include<iostream>
using namespace std;

// Task 2: C++ Variables and I/O
// Written by Muhammad Ali
// 9/1/2026

// Ask the user to enter full name, roll number, age, section, and current semester.
// Display the complete student profile using cout with clear labels.

int student() {
	int rollNumber, age, semester;
	char section;
	char firstName[32], lastName[32]; // first name and last name

	cout << endl << "  Complete your profile" << endl;
	cout << "  Enter your first name: ";
	cin >> firstName;
	cout << "  Enter your last name: ";
	cin >> lastName;
	cout << "  Enter your roll number (XXXX): ";
	cin >> rollNumber;
	cout << "  Enter your age: ";
	cin >> age;
	cout << "  Enter your semester number (one-digit): ";
	cin >> semester;
	cout << "  Enter your section alphabet (X): ";
	cin >> section;

	cout << endl << endl << endl << "\t --- Student Profile ---" << endl << endl;
	cout << "\tFull Name: " << firstName << " " << lastName << endl;
	cout << "\tRoll number: " << rollNumber << endl;
	cout << "\tAge: " << age << endl;
	cout << "\tSemester: " << semester << endl;
	cout << "\tSection: " << section << endl;

	cout << endl << "\tEnd of task" << endl << endl;
	return 0;
}