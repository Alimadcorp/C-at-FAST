#include <iostream>
using namespace std;

// Question 6: Age Calculator
// Written by Muhammad Ali on 19/10/2026
// 26L-0732

int main() {
  int d1, m1, y1; // dob
  int d2, m2, y2; // current date

  while (true) {
    cout << "Enter DOB (DD MM YYYY): ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter Current Date (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;

    // validate dob
    bool v1 = false;
    if (y1 >= 1 && m1 >= 1 && m1 <= 12 && d1 >= 1) {
      int max_d1 = 31;
      if (m1 == 2) {
        bool lp1 = (y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0);
        max_d1 = lp1 ? 29 : 28;
      } else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        max_d1 = 30;
      }
      if (d1 <= max_d1) v1 = true;
    }

    // validate cur date
    bool v2 = false;
    if (y2 >= 1 && m2 >= 1 && m2 <= 12 && d2 >= 1) {
      int max_d2 = 31;
      if (m2 == 2) {
        bool lp2 = (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0);
        max_d2 = lp2 ? 29 : 28;
      } else if (m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) {
        max_d2 = 30;
      }
      if (d2 <= max_d2) v2 = true;
    }

    if (v1 && v2) {
      if (y2 > y1 || (y2 == y1 && m2 > m1) || (y2 == y1 && m2 == m1 && d2 >= d1))
        break;
    }
    cout << "Invalid dates, try again...\n" << endl;
  }

  // age calculation with borrowing
  if (d2 < d1) {
    m2--;
    int prev_m = m2;
    int prev_y = y2;
    if (prev_m < 1) {
      prev_m = 12;
      prev_y--;
    }

    int add_days = 31;
    if (prev_m == 2) {
      bool lp = (prev_y % 4 == 0 && prev_y % 100 != 0) || (prev_y % 400 == 0);
      add_days = lp ? 29 : 28;
    } else if (prev_m == 4 || prev_m == 6 || prev_m == 9 || prev_m == 11) {
      add_days = 30;
    }

    d2 += add_days;
  }

  if (m2 < m1) {
    y2--;
    m2 += 12;
  }

  int ans_d = d2 - d1;
  int ans_m = m2 - m1;
  int ans_y = y2 - y1;

  cout << "\nAge is " << ans_y << " years " << ans_m << " months and " << ans_d << " days." << endl;

  return 0;
}
