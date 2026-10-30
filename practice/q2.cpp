#include <iostream>
using namespace std;

// write a function processGrades that takes an integer array of 10 midterm
// scores. It must also take three integer variables passed by reference:
// maxScore, minScore, and average. The function should sort the array in
// ascending order using Bubble Sort, update the three reference variables with
// their respective values, and print the sorted array from the main() function

void processGrades(int arr[10], int &maxScore, int &minScore, int &average) {
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += arr[i];
    for (int j = 0; j < 9; j++) {
      if (arr[j + 1] < arr[j]) {
        int t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
  average = sum / 10;
  minScore = arr[0];
  maxScore = arr[9];
}

int main() {
  int arr[10] = {0};
  int maxScore, minScore, average;
  cout << "Enter 10 numbers: " << endl;
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  processGrades(arr, maxScore, minScore, average);

  cout << "Sorted array:\n";

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << "\nmin: " << minScore;
  cout << "\nmax: " << maxScore;
  cout << "\navg: " << average;

  return 0;
}
