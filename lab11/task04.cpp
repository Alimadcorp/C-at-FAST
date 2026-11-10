#include <iostream>
using namespace std;

// Task 04: Sum per row

void sumOfEachRow(int(&array)[2][3])
{
	for (int i = 0; i < 2; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
			sum += array[i][j];
		cout << "Row " << i + 1 << " sum: " << sum << endl;
	}
}

int q4()
{
	int array[2][3];
	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	sumOfEachRow(array);
	return 0;
}
