#include <iostream>
using namespace std;

// Task 10: Student marks

void displayStudentTotals(int(&array)[3][2])
{
	for (int i = 0; i < 3; i++)
	{
		int total = 0;
		for (int j = 0; j < 2; j++)
			total += array[i][j];
		cout << "Student " << i + 1 << " total: " << total << endl;
	}
}

int q10()
{
	int array[3][2], search = 0;
	for (int i = 0; i < 3; i++) {
		cout << "Student " << i + 1 << ": ";
		for (int j = 0; j < 2; j++)
			cin >> array[i][j];
	}
	displayStudentTotals(array);
	return 0;
}
