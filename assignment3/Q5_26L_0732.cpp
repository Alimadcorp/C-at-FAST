#include <iostream>
#include <string>
using namespace std;

const int MAX = 20;
int dr[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dc[] = {1, -1, 0, 0, 1, -1, -1, 1};

void readG(char g[MAX][MAX], int r, int c) {
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      cin >> g[i][j];
}

bool chkDir(char g[MAX][MAX], int r, int c, int i, int j, const string &w,
            int d) {
  for (int k = 0; k < w.length(); ++k) {
    int nr = i + k * dr[d], nc = j + k * dc[d];
    if (nr < 0 || nr >= r || nc < 0 || nc >= c || g[nr][nc] != w[k])
      return false;
  }
  return true;
}

int countW(char g[MAX][MAX], int r, int c, const string &w) {
  int cnt = 0;
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      for (int d = 0; d < 8; ++d)
        if (chkDir(g, r, c, i, j, w, d))
          cnt++;
  return cnt;
}

int main() {
  int r, c;
  cout << "Rows & Cols: ";
  cin >> r >> c;
  if (r < 3 || r > MAX || c < 3 || c > MAX)
    return 0;

  char g[MAX][MAX];
  cout << "Enter grid:\n";
  readG(g, r, c);

  string w;
  cout << "Seearch for: ";
  cin >> w;
  cout << "Total occurrences: " << countW(g, r, c, w) << endl;
}
