#include <iostream>
using namespace std;

// Task 05: Sum per column

void sumOfEachColumn(int(&array)[2][3])
{
	for (int j = 0; j < 3; j++)
	{
		int sum = 0;
		for (int i = 0; i < 2; i++)
			sum += array[i][j];
		cout << "Column " << j + 1 << " sum: " << sum << endl;
	}
}

int q5()
{
	int array[2][3];
	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	sumOfEachColumn(array);
	return 0;
}
