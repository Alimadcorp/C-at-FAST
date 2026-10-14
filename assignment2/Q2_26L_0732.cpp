#include <iostream>
using namespace std;

// Question 2: Printing a spiral without use of arrays
// Movement pattern is anticlockwise with first move towards the left
// Originally Written by Muhammad Ali on 27/09/2026
// 26L-0732

int main() {
  int N, cx, cy;
  cout << "Enter size: ";
  cin >> N;
  // the largest number in the array is this squared odd number
  int max = N * N + 1;
  cout << endl;
  cx = cy = (N - 1) / 2; // center (c, c)
  if (N % 2 == 0)
    cy++; // move the center to the bottom left instead of top left of the 2x2
          // center in case of even N
  for (int y = 0; y < N; y++) {
    for (int x = 0; x < N; x++) {
      int dx, dy, k; // dx, dy are relative distance from center, k is manhattan
                     // distance
      dx = x - cx;
      dy = y - cy;
      int _dx = dx, _dy = dy;
      if (_dx < 0)
        _dx = -_dx;
      if (_dy < 0)
        _dy = -_dy;
      k = _dx > _dy ? _dx : _dy; // same as max(dx, dy);
      int base = (2 * k - 1);
      base = base * base; // largest value of inner square
      int offset = 0;
      // calculating offset:
      if (dx == -k && dy != -k) { // at the left wall
        offset = k + dy;
      } else if (dy == k) {       // bottom
        offset = 2 * k + (k + dx); // accumulated from last wall: 2 * k + the
                                   // relative position in current wall
      } else if (dx == k) {       // right
        offset = 4 * k + (k - dy); // acc from two walls
      } else {                     // top
        offset = 6 * k + (k - dx); // acc from three walls
      }
      cout << max - (base + offset)
           << "\t"; // invert the number so spiral from N to 1
    }
    cout << "\n";
  }
  return 0;
}