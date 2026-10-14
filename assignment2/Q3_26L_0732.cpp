#include <cmath>
#include <iostream>

using namespace std;

// Question 3: What do i even call this
// Written by Muhammad Ali on 15/10/2026
// 26L-0732
// Sample input: 2 5 4 17 34 11 10 8 18 24 23 89 1

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

  int left = 0, right = size - 1, minSwap = 0;

  // step 1: separate fibonacci to the left
  while (left < right) {
    // if the num at [left] is fibonacci
    long long v1 = 5LL * arr[left] * arr[left] + 4,
              v2 = 5LL * arr[left] * arr[left] - 4;
    long long r1 = round(sqrt(v1)), r2 = round(sqrt(v2));
    bool left_fib =
        (arr[left] >= 0 && arr[left] != 2) && (r1 * r1 == v1 || r2 * r2 == v2);
    // if the num at [right] is fibonacci
    v1 = 5LL * arr[right] * arr[right] + 4;
    v2 = 5LL * arr[right] * arr[right] - 4;
    r1 = round(sqrt(v1));
    r2 = round(sqrt(v2));
    bool right_fib = (arr[right] >= 0 && arr[right] != 2) &&
                     (r1 * r1 == v1 || r2 * r2 == v2);

    if (left_fib)
      left++; // is in the right place, continue
    else if (!right_fib)
      right--; // doesnt need to be moved into here
    else {
      // swap if both are in the wrong place
      temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      minSwap++;
      left++;
      right--;
    }
  }

  // reset right pointer to look at the remaining nons
  right = size - 1;

  // step 2: separate nons and prime numbers till the counters meet
  while (left < right) {
    bool left_prime = true; // check if [left] is prime
    if (arr[left] <= 1)
      left_prime = false;
    else {
      for (int i = 2; i <= sqrt(arr[left]); i++) {
        if (arr[left] % i == 0) {
          left_prime = false;
          break;
        }
      }
    }

    bool right_prime = true; // same for [right]
    if (arr[right] <= 1)
      right_prime = false;
    else {
      for (int i = 2; i <= sqrt(arr[right]); i++) {
        if (arr[right] % i == 0) {
          right_prime = false;
          break;
        }
      }
    }

    if (!left_prime) // is at right place, continue
      left++;
    else if (right_prime) // is at right place alr
      right--;
    else {
      // if both are not in the right place, swap
      temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      minSwap++;
      left++;
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
