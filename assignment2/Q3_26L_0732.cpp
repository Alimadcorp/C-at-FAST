#include <cmath>
#include <iostream>

using namespace std;

// Question 3: What do i even call this
// Written by Muhammad Ali on 15/10/2026
// 26L-0732

int main() {
  const int max = 2048;
  int arr[max], size = 0, inp, temp;

  cout << "Enter an array of space separated numbers below:" << endl;

  while (size < max && cin >> inp) {
    arr[size++] = inp;
    if (cin.peek() == '\n') {
      break;
    }
  }

  // variables for sorting and counting swaps
  int left = 0,         // index of last fibonacci num
      mid = 0,          // loop counter
      right = size - 1, // index of first prime num
      minSwap = 0;

  // loop till we meet a state where theres only primes to the right
  while (mid <= right) {
    int n = arr[mid];
    bool fib = false;
    bool prime = true;

    // is it fibonacci?
    if (n >= 0) {
      long long val1 = 5LL * n * n + 4;
      long long val2 = 5LL * n * n - 4;
      long long root1 = round(sqrt(val1));
      long long root2 = round(sqrt(val2));
      if (root1 * root1 == val1 || root2 * root2 == val2) {
        fib = true;
      }
    }

    // is prime?
    if (n <= 1) {
      prime = false;
    } else {
      for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
          prime = false;
          break;
        }
      }
    }

    if (fib) {
      // swap mid with left (current num with the last fibonacci)
      if (mid != left) {
        temp = arr[mid];
        arr[mid] = arr[left];
        arr[left] = temp;
        minSwap++;
      }
      left++;
      mid++;
    } else if (!prime) {
      // dont do anything as nons are alr in center
      mid++;
    } else {
      // swap mid with right (current num with the first prime)
      if (mid != right) {
        temp = arr[mid];
        arr[mid] = arr[right];
        arr[right] = temp;
        minSwap++;
      }
      right--;
    }
  }

  cout << endl << "Result:" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Minimum swaps: " << minSwap << endl;

  return 0;
}
