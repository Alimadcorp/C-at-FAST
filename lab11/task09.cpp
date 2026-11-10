#include <iostream>
using namespace std;

// Task 09: Count even elements

int evenCount(int(&array)[2][3])
{
	int count = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2; i++)
			if (array[i][j] % 2 == 0) count++;
	}
	return count;
}

int q9()
{
	int array[2][3], search = 0;
	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	cout << "There are " << evenCount(array) << " even elements";
	return 0;
}
