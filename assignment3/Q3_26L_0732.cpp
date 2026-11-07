#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

using namespace std;
using namespace chrono;

/*
0 0 0 0 0
0 0 1 0 0
0 0 1 0 0
0 0 1 0 0
0 0 0 0 0
*/

void printGrid(const vector<vector<int>> &grid) {
  int h = grid.size();
  int w = grid[0].size();
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}

int countNeighbors(const vector<vector<int>> &grid, int r, int c,
                       int height, int width) {
  int count = 0;
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (i == 0 && j == 0)
        continue;
      int row = r + i;
      int col = c + j;
      if (row >= 0 && row < height && col >= 0 &&
          col < width) {
        if (grid[row][col] == 1) {
          count++;
        }
      }
    }
  }
  return count;
}

int main() {
  int width, height, steps, mode;
  cout << "Enter the number of rows: ";
  cin >> height;
  cout << "Enter the number of columns: ";
  cin >> width;
  if (width < 3 || height < 3 || width > 20 || height > 20) {
    cout << "Invalid input! Size must be between 3x3 and 20x20." << endl;
    return 0;
  }
  vector<vector<int>> grid(height, vector<int>(width, 0));
  cout << "Enter the initial grid:" << endl;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      cin >> grid[i][j];
    }
  }
  cout << "Enter number of generations: ";
  cin >> steps;
  cout << "Render mode (1 = print list, 2 = animated): ";
  cin >> mode;
  if (mode == 2) {
    system("clear");
  }
  cout << "\nInitial Generation:" << endl;
  printGrid(grid);
  if (mode == 2) {
    this_thread::sleep_for(chrono::milliseconds(100));
  }
  for (int step = 1; step <= steps; step++) {
    vector<vector<int>> nextGrid = grid;

    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        int live = countNeighbors(grid, i, j, height, width);

        if (grid[i][j] == 1) {
          if (live < 2 || live > 3) {
            nextGrid[i][j] = 0;
          }
        } else {
          if (live == 3) {
            nextGrid[i][j] = 1;
          }
        }
      }
    }
    grid = nextGrid;
    if (mode == 2) {
      system("clear");
      cout << "Generation " << step << ":" << endl;
      printGrid(grid);
      this_thread::sleep_for(milliseconds(100));
    } else {
      cout << "\nGeneration " << step << ":" << endl;
      printGrid(grid);
    }
  }

  return 0;
}
