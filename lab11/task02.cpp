#include <iostream>
using namespace std;

// Task 02: Rendering by Function

void displayAsMatrix(int(&array)[2][3], int cols)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
}

int q2()
{
	int array[2][3];
	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	cout << "Matrix:" << endl;
	displayAsMatrix(array, 3);
	return 0;
}
