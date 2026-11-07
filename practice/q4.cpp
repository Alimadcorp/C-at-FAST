#include <iostream>
using namespace std;

void cleanData(int arr[], int &actualSize) {
    for (int i = 0; i < actualSize; i++) {
        for (int j = 0; j < actualSize - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    int j = 0;
    for (int i = 0; i < actualSize - 1; i++) {
        while (arr[j] == arr[j + 1]) {
            j++;
            actualSize--;
        }
        arr[i] = arr[j];
        j++;
    }
}

int main() {
  int arr[15];
  int actualSize = 15;
  cout << "Enter 15 numbers: ";
  for (int i = 0; i < 15; i++) {
    cin >> arr[i];
  }
  cout << endl;

  cleanData(arr, actualSize);

  for (int i = 0; i < actualSize; i++) {
    cout << arr[i] << " ";
  }
}