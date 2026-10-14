#include <iostream>
using namespace std;

// Question :
// Written by Muhammad Ali on 14/10/2026
// 26L-0732

int main() {
  int N, size;

  cout << "Enter size: ";
  cin >> N;
  size = 2 * N - 1; // (n - 1) numbers to left and right + 1 in center

  for (int y = 0; y < size; y++) {
    for (int x = 0; x < size; x++) {
        int min_dist; // lowest distance from edge
        int dr = size - x - 1; // distance from right edge
        int db = size - y - 1; // distance from bottom edg
        min_dist = x; // let minimum be dist frm left edge
        if (y < min_dist) min_dist = y;     // find
        if (dr < min_dist) min_dist = dr;   // lowest
        if (db < min_dist) min_dist = db;   // distance
        cout << N - min_dist << " ";
    }
    cout << endl;
  }

  cout << endl << "";

  cout << endl;
  return 0;
}