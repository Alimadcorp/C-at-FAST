#include <iostream>
using namespace std;

// Task 07: Hit search by value

bool exists(int(&array)[2][3], int key)
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2; i++)
			if (array[i][j] == key) return true;
	}
	return false;
}

int q7()
{
	int array[2][3], search = 0;
	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	cout << "Search for: ";
	cin >> search;
	if (exists(array, search)) {
		cout << search << " found in array.";
	}
	else {
		cout << search << " not found in array.";
	}
	return 0;
}
