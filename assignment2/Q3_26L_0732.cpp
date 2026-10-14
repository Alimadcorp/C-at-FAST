#include <cmath>
#include <iostream>

using namespace std;

// Question 3: What do i even call this
// Written by Muhammad Ali on 15/10/2026
// 26L-0732

int main() {
  const int max = 2048;
  int arr[max], size = 0, inp;

  cout << "Enter an array of space separated numbers below:" << endl;

  while (size < max && cin >> inp) {
    arr[size++] = inp;
    if (cin.peek() == '\n') {
      break;
    }
  }

  for (int i = 0; i < size; i++) {
    bool prime = true, fib = false;
    int n = arr[i];
    int mn = 5 * n * n;
    // using inverse of the fibonacci formula
    // 1.618 ^ n / sqrt(5)
    // we find that for fibonacci, 5 * n * n + 4 = m * m (m is int)
    if (sqrt(mn + 4) == mn + 4 || sqrt(mn - 4) == mn - 4) {
      fib = true;
      prime = false;
    } else {
      for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
          prime = false;
          break;
        }
      }
    }
  }

  return 0;
}