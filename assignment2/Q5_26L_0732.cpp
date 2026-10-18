#include <iostream>
using namespace std;

// Question 5: Fibonacci Tasks
// Written by Muhammad Ali on 19/10/2026
// 26L-0732

int main() {
  // part 1
  long long int k, out;
  cout << "How many fibonacci numbers do you want: ";
  cin >> k;
  for (int i = 0; i < k; i++) {
    int idx;
    if (i != k - 1)
      cout << "Enter to get nth fibonacci: ";
    else
      cout << "Enter to get last nth fibonacci: ";
    cin >> idx;

    if (idx <= 0)
      out = 0;
    if (idx == 1)
      return 1;
    long long a = 0, b = 1, c = 0;
    for (int i = 2; i <= idx; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    out = b;
    cout << "F" << idx << " = " << out << endl;
  }

  // part 2
  int limit;
  cout << "\nHow many numbers do you want to print up to: ";
  cin >> limit;
  cout << "The Sequence up to " << limit << " is: ";
  long long f1 = 0, f2 = 1;
  bool first = true;
  while (f1 < limit) {
    if (!first)
      cout << ", ";
    cout << f1;
    first = false;
    long long nxt = f1 + f2;
    f1 = f2;
    f2 = nxt;
  }
  cout << endl;

  // part 3
  int st, en;
  cout << "\nEnter start and end, separated by space: ";
  cin >> st >> en;
  cout << "Fibonacci between " << st << " and " << en << ": ";
  f1 = 0;
  f2 = 1;
  first = true;
  while (f1 <= en) {
    if (f1 >= st) {
      if (!first)
        cout << ", ";
      cout << f1;
      first = false;
    }
    long long nxt = f1 + f2;
    f1 = f2;
    f2 = nxt;
  }
  cout << endl;

  // part 4
  long long x = 1, y = 2, sum = 0;
  while (y <= 4000000) {
    if (y % 2 == 0)
      sum += y;
    long long nxt = x + y;
    x = y;
    y = nxt;
  }
  cout << "\nSum of even fib till 4 mil is: " << sum << endl;

  return 0;
}
