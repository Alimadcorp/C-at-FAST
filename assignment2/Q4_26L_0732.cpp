#include <iostream>

using namespace std;

// Question 4: Even/Odd Index Sorting
// Written by Muhammad Ali on 15/10/2026
// 26L-0732

int main() {
  const int max_values = 100;
  int arr[max_values], size = 0, inp;

  cout << "Enter space-separated numbers (-1 to stop):" << endl;
  while (size < max_values && cin >> inp) {
    if (inp == -1)
      break;
    arr[size++] = inp;
  }

  // sort even
  for (int i = 2; i < size; i += 2) {
    int key = arr[i];
    int j = i - 2;
    while (j >= 0 && arr[j] > key) {
      arr[j + 2] = arr[j];
      j -= 2;
    }
    arr[j + 2] = key;
  }

  // sort odd in descending
  for (int i = 3; i < size; i += 2) {
    int key = arr[i];
    int j = i - 2;
    while (j >= 1 && arr[j] < key) {
      arr[j + 2] = arr[j];
      j -= 2;
    }
    arr[j + 2] = key;
  }

  cout << endl << "Result:" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
