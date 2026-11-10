#include <iostream>
using namespace std;

// Task 06: Find largest

int findLargest(int(&array)[2][2])
{
		int max = array[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			if (array[i][j] > max) {
				max = array[i][j];
			}
	}
	return max;
}

int q6()
{
	int array[2][2];
	cout << "Enter 4 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cin >> array[i][j];
	cout << "Largest: " << findLargest(array);
	return 0;
}
