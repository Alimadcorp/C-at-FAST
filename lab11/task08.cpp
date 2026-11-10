#include <iostream>
using namespace std;

// Task 08: Matrix sum

void addMatrices(int(&matrixA)[2][2], int(&matrixB)[2][2], int(&outMatrix)[2][2])
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			outMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
	}
}

void displayAsMatrix(int(&array)[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
}

int q8()
{
	int firstMatrix[2][2], secondMatrix[2][2], outputMatrix[2][2];
	cout << "Enter first matrix (4 nums): ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cin >> firstMatrix[i][j];
	cout << "Enter second matrix (4 nums): ";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cin >> secondMatrix[i][j];
	addMatrices(firstMatrix, secondMatrix, outputMatrix);
	cout << "Matrix sum:" << endl;
	displayAsMatrix(outputMatrix);
	return 0;
}
