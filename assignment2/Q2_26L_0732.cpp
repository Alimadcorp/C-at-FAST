#include <iostream>
using namespace std;

// Question 2: Printing a spiral without use of arrays
// Movement pattern is anticlockwise with first move towards the left
// Originally Written by Muhammad Ali on 27/09/2026
// 26L-0732

int main() {
  int N;
  double cx, cy;
  cout << "Enter size: ";
  cin >> N;
  // the largest number in the array is this squared odd number
  int max = N * N + 1;
  cout << endl;
  cx = cy = (N - 1) / 2.0; // center (c, c)
  for (int y = 0; y < N; y++) {
    for (int x = 0; x < N; x++) {
      double dx, dy;
      int k; // dx, dy are relative distance from center, k is manhattan
             // distance
      dx = x - cx;
      dy = y - cy;
      double _dx = dx, _dy = dy;
      if (_dx < 0)
        _dx = -_dx;
      if (_dy < 0)
        _dy = -_dy;
      k = (_dx > _dy ? _dx : _dy) + 0.5; // same as max(dx, dy);

      // CHANGE 1: Adjust base sequence for even layouts
      int base =
          (N % 2 == 0) ? (2 * k - 2) * (2 * k - 2) : (2 * k - 1) * (2 * k - 1);

      double offset = 0;
      double wall = (N % 2 == 0) ? (k - 0.5) : k;
      // calculating offset:
      if (dx == -wall && dy != -wall) { // at the left wall
        offset = wall + dy;
      } else if (dy == wall) { // bottom
        offset = 2 * wall + (wall + dx);
      } else if (dx == wall) { // right
        offset = 4 * wall + (wall - dy);
      } else { // top
        offset = 6 * wall + (wall - dx);
      }
      cout << max - (base + (int)offset)
           << "\t"; // invert the number so spiral from N to 1
    }
    cout << "\n";
  }
  return 0;
}
