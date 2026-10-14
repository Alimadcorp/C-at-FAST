#include <cmath>
#include <iostream>

using namespace std;

// Question 4: Sorting?
// Written by Muhammad Ali on 15/10/2026
// 26L-0732
// Sample input: 100 10 2 3 27 9 19 13

int main() {
  const int max = 2048;
  int arr[max], size = 0, inp, temp;

  cout
      << "Enter an array of space separated numbers below, write -1 at the end:"
      << endl;

  while (size < max && cin >> inp) {
    arr[size++] = inp;
    if (cin.peek() == '\n' || inp == -1) {
      break;
    }
  }

  for (int i = 0; i < size; i += 2) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  for (int i = 1; i < size; i += 2) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  cout << endl << "Result:" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
