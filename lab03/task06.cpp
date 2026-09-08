#include<iostream>
using namespace std;

// Task 06 - Simple Salary and Savings
// Input hourly pay rate, hours of work, and monthly expense, output salary and savings.

int q6() {
	double hourlyRate, hoursWorkedThisMonth, monthlyExpense, salary, savings;

	cout << "Enter hourly rate of earning: ";
	cin >> hourlyRate;
	cout << "Enter hours worked this month: ";
	cin >> hoursWorkedThisMonth;
	cout << "Enter monthly expense: ";
	cin >> monthlyExpense;

	salary = hourlyRate * hoursWorkedThisMonth;
	savings = salary - monthlyExpense;

	cout << endl << "--- Savings Calculator ---\n\n";
	cout << "This month's salary: " << salary << endl;
	cout << "Total expense: " << monthlyExpense << endl;
	cout << "Savings: " << savings << endl;
	cout << "See you next month! ^.^" << endl;
	cout << "Written by Muhammad Ali" << endl;

	return 0;
}