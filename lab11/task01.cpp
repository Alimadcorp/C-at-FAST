#include <iostream>
using namespace std;

// Task 01: Rendering?

int q1()
{
	int array[2][3];
	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	cout << "Matrix:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	return 0;
}
