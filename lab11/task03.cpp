#include <iostream>
using namespace std;

// Task 03: Sum elements by Function

int calculateSum(int(&array)[2][2])
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			sum += array[i][j];
	}
	return sum;
}

int q3()
{
	int array[2][2];
	cout << "Enter 4 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cin >> array[i][j];
	cout << "Sum of elements: " << calculateSum(array) << endl;
	return 0;
}
