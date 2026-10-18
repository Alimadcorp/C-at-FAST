#include <iostream>

using namespace std;

// Question 4: Even/Odd Index Sorting & Max/Min Alternate Sorting
// Written by Muhammad Ali on 19/10/2026
// 26L-0732
// Sample input 1: 100 10 2 3 27 9 19 13 -1
// Sample input 2: 18 11 17 12 16 13 15 14 -1

int main() {
  const int max_values = 100;
  int arr[max_values], size = 0, inp;

  cout << "Enter space-separated numbers (-1 to stop):" << endl;
  while (size < max_values && cin >> inp) {
    if (inp == -1)
      break;
    arr[size++] = inp;
  }

  // sort even & odd
  for (int i = 2; i < size; i += 2) {
    int key = arr[i];
    int j = i - 2;
    while (j >= 0 && arr[j] > key) {
      arr[j + 2] = arr[j];
      j -= 2;
    }
    arr[j + 2] = key;
  }

  for (int i = 3; i < size; i += 2) {
    int key = arr[i];
    int j = i - 2;
    while (j >= 1 && arr[j] < key) {
      arr[j + 2] = arr[j];
      j -= 2;
    }
    arr[j + 2] = key;
  }

  cout << endl << "Part 1 Result:" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // minmax alternate Sorting
  // sort the array
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // interleave max and min elements into a temp array
  int result[max_values];
  int left = 0, right = size - 1;
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0)
      result[i] = arr[right--]; // 1st max, second max..
    else
      result[i] = arr[left++]; // 1st min, 2nd min, etc
  }

  cout << endl << "Part 2 Result:" << endl;
  for (int i = 0; i < size; i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
