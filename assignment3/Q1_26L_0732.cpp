#include <iostream>
#include <vector>
using namespace std;

void displayMatrix(const vector<vector<int>> &matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}

void displayMatrices(const vector<vector<int>> &matrixA,
                     const vector<vector<int>> &matrixB) {
  int rowsA = matrixA.size();
  int colsA = matrixA[0].size();
  int rowsB = matrixB.size();
  int colsB = matrixB[0].size();
  int maxRows = rowsA;
  if (rowsB > maxRows) {
    maxRows = rowsB;
  }
  cout << "Matrix A:";
  for (int i = 0; i < colsA - 1; i++)
    cout << "\t";
  cout << "Matrix B:" << endl;
  for (int i = 0; i < maxRows; i++) {
    if (i < rowsA) {
      for (int j = 0; j < colsA; j++) {
        cout << matrixA[i][j] << "\t";
      }
    }
    cout << "|\t";
    if (i < rowsB) {
      for (int j = 0; j < colsB; j++) {
        cout << matrixB[i][j] << "\t";
      }
    }
    cout << endl;
  }
}

vector<vector<int>> addMatrices(vector<vector<int>> matrixA,
                                const vector<vector<int>> &matrixB) {
  int rowsA = matrixA.size();
  int colsA = matrixA[0].size();
  int rowsB = matrixB.size();
  int colsB = matrixB[0].size();
  if (rowsA == rowsB && colsA == colsB) {
    for (int i = 0; i < rowsA; i++) {
      for (int j = 0; j < colsA; j++) {
        matrixA[i][j] += matrixB[i][j];
      }
    }
    return matrixA;
  } else {
    return {};
  }
}

vector<vector<int>> subtractMatrices(vector<vector<int>> matrixA,
                                     const vector<vector<int>> &matrixB) {
  int rowsA = matrixA.size();
  int colsA = matrixA[0].size();
  int rowsB = matrixB.size();
  int colsB = matrixB[0].size();
  if (rowsA == rowsB && colsA == colsB) {
    for (int i = 0; i < rowsA; i++) {
      for (int j = 0; j < colsA; j++) {
        matrixA[i][j] -= matrixB[i][j];
      }
    }
    return matrixA;
  } else {
    return {};
  }
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>> &matrixA,
                                     const vector<vector<int>> &matrixB) {
  int rowsA = matrixA.size();
  int colsA = matrixA[0].size();
  int rowsB = matrixB.size();
  int colsB = matrixB[0].size();
  if (colsA != rowsB) {
    return {};
  }
  vector<vector<int>> result(rowsA, vector<int>(colsB, 0));
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < colsB; j++) {
      for (int k = 0; k < colsA; k++) {
        result[i][j] += matrixA[i][k] * matrixB[k][j];
      }
    }
  }
  return result;
}

vector<vector<int>> transposeMatrix(const vector<vector<int>> &matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();
  vector<vector<int>> result(rows, vector<int>(cols, 0));
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] += matrix[j][i];
    }
  }
  return result;
}

vector<vector<int>> sortMatrix(vector<vector<int>> matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();
  vector<int> temp;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      temp.push_back(matrix[i][j]);
    }
  }
  int totalElements = temp.size();
  for (int i = 0; i < totalElements - 1; i++) {
    for (int j = 0; j < totalElements - i - 1; j++) {
      if (temp[j] > temp[j + 1]) {
        int swapVar = temp[j];
        temp[j] = temp[j + 1];
        temp[j + 1] = swapVar;
      }
    }
  }
  int k = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = temp[k++];
    }
  }
  return matrix;
}

vector<vector<int>> subMatrix(const vector<vector<int>> &matrix, int startRow,
                              int endRow, int startCol, int endCol) {
  int rows = matrix.size();
  int cols = (rows > 0) ? matrix.size() : 0;
  if (rows == 0 || cols == 0 || startRow < 0 || endRow >= rows ||
      startRow > endRow || startCol < 0 || endCol >= cols ||
      startCol > endCol) {
    return {};
  }
  int subRows = endRow - startRow + 1;
  int subCols = endCol - startCol + 1;
  vector<vector<int>> submatrix(subRows, vector<int>(subCols, 0));
  for (int i = 0; i < subRows; i++) {
    for (int j = 0; j < subCols; j++) {
      submatrix[i][j] = matrix[startRow + i][startCol + j];
    }
  }
  return submatrix;
}

int main() {
  int colsA = 1, colsB = 1;
  int rowsA = 1, rowsB = 1;
  cout << "Enter how many rows and columns of matrix A: ";
  cin >> rowsA >> colsA;
  if (rowsA < 1 || colsA < 1) {
    cout << "Invalid input";
  }
  vector<vector<int>> matrixA(rowsA, vector<int>(colsA, 0));
  cout << "Enter how many rows and columns of matrix B: ";
  cin >> rowsB >> colsB;
  if (rowsB < 1 || colsB < 1) {
    cout << "Invalid input";
  }
  vector<vector<int>> matrixB(rowsB, vector<int>(colsB, 0));

  cout << endl << "Enter the complete matrix A:" << endl;
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < colsA; j++) {
      cin >> matrixA[i][j];
    }
  }
  cout << endl << "Enter the complete matrix B:" << endl;
  for (int i = 0; i < rowsB; i++) {
    for (int j = 0; j < colsB; j++) {
      cin >> matrixB[i][j];
    }
  }

  displayMatrices(matrixA, matrixB);

  if (colsA == colsB && rowsA == rowsB) {
    cout << endl << "Sum:" << endl;
    vector<vector<int>> sum = addMatrices(matrixA, matrixB);
    displayMatrix(sum);
  } else {
    cout << endl << "These matrices cannot be added!" << endl;
  }

  if (colsA == colsB && rowsA == rowsB) {
    cout << endl << "Difference:" << endl;
    vector<vector<int>> diff = subtractMatrices(matrixA, matrixB);
    displayMatrix(diff);
  } else {
    cout << endl << "These matrices cannot be diffed!" << endl;
  }

  vector<vector<int>> product = multiplyMatrices(matrixA, matrixB);
  if (!product.empty()) {
    cout << endl << "Product:" << endl;
    displayMatrix(product);
  } else {
    cout << endl << "These matrices cannot be multiplied!" << endl;
  }

  cout << endl << "Transpose of A:" << endl;
  displayMatrix(transposeMatrix(matrixA));
  cout << endl << "Transpose of B:" << endl;
  displayMatrix(transposeMatrix(matrixB));
  cout << endl << "Sorted matrix A:" << endl;
  displayMatrix(sortMatrix(matrixA));
  cout << endl << "Sorted matrix B:" << endl;
  displayMatrix(sortMatrix(matrixB));

  int rowS, rowE, colS, colE;
  cout << endl << "Submatrix start and end row: ";
  cin >> rowS >> rowE;
  cout << endl << "Submatrix start and end column: ";
  cin >> colS >> colE;
  cout << "Submatrix of A:" << endl;
  displayMatrix(subMatrix(matrixA, rowS, rowE, colS, colE));
  cout << "Submatrix of B:" << endl;
  displayMatrix(subMatrix(matrixB, rowS, rowE, colS, colE));

  return 0;
}