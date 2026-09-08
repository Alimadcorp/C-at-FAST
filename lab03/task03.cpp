#include<iostream>
using namespace std;

// Task 03 - Marks Summary
// Input marks of 3 subjects out of 100, output total, average, and percentage.

int q3() {
	int marks1, marks2, marks3, max = 300;
	double totalMarks, percentage, average;

	cout << "Enter marks in English: ";
	cin >> marks1;
	cout << "Enter marks in Math: ";
	cin >> marks2;
	cout << "Enter marks in Physics: ";
	cin >> marks3;

	totalMarks = marks1 + marks2 + marks3;
	percentage = 100 * totalMarks / max;
	average = totalMarks / 3.0;

	cout << endl << "--- Marks Summary ---\n\n";
	cout << "Total marks: " << totalMarks << endl;
	cout << "Average marks: " << average << endl;
	cout << "Percentage: " << percentage << endl;

	return 0;
}