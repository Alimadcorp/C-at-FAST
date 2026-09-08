#include<iostream>
using namespace std;

// Task 01 - Student Bio Data
// Input, store and display student age, roll number, semester number, and one section character.

int q4() {
	int age, roll, semester;
	char section;

	cout << "Enter age: ";
	cin >> age;
	cout << "Enter roll number: ";
	cin >> roll;
	cout << "Enter semester number: ";
	cin >> semester;
	cout << "Enter section letter: ";
	cin >> section;

	cout << endl << "Your Bio Data\n\n";
	cout << "Age: " << age << endl;
	cout << "Roll number: " << roll << endl;
	cout << "Semester: " << semester << endl;
	cout << "Section: " << section << endl;

	return 0;
}