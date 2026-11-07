#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void reg(vector<int> &r, vector<int> &c) {
  int s, crs;
  cout << "Roll & Course: ";
  cin >> s >> crs;
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s && c[i] == crs) {
      cout << "Already exists!\n";
      return;
    }
  r.push_back(s);
  c.push_back(crs);
}
void drop(vector<int> &r, vector<int> &c) {
  int s, crs;
  cout << "Roll & Course: ";
  cin >> s >> crs;
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s && c[i] == crs) {
      r.erase(r.begin() + i);
      c.erase(c.begin() + i);
      return;
    }
  cout << "Not found!\n";
}
void xfer(vector<int> &r, vector<int> &c) {
  int s, oldC, newC;
  cout << "Roll, Old & New Course: ";
  cin >> s >> oldC >> newC;
  int idx = -1;
  bool dup = false;
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s) {
      if (c[i] == oldC)
        idx = i;
      if (c[i] == newC)
        dup = true;
    }
  if (idx != -1 && !dup)
    c[idx] = newC;
  else
    cout << "Invalid transfer!\n";
}
void chk(const vector<int> &r, const vector<int> &c) {
  int s, crs;
  cout << "Roll & Course: ";
  cin >> s >> crs;
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s && c[i] == crs) {
      cout << "Registered\n";
      return;
    }
  cout << "Not Registered\n";
}
void common(const vector<int> &r, const vector<int> &c) {
  int s1, s2;
  cout << "Two Rolls: ";
  cin >> s1 >> s2;
  vector<int> c1;
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s1)
      c1.push_back(c[i]);
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s2 && find(c1.begin(), c1.end(), c[i]) != c1.end())
      cout << c[i] << " ";
  cout << "\n";
}
void disp(const vector<int> &r, const vector<int> &c) {
  int s;
  cout << "Roll: ";
  cin >> s;
  bool any = false;
  for (size_t i = 0; i < r.size(); ++i)
    if (r[i] == s) {
      cout << c[i] << " ";
      any = true;
    }
  if (!any)
    cout << "No registrations.";
  cout << "\n";
}
int main() {
  vector<int> r, c;
  int choice;
  do {
    cout << "\n1.Reg 2.Drop 3.Xfer 4.Chk 5.Common 6.Disp 7.Exit\nChoice: ";
    cin >> choice;
    if (choice == 1)
      reg(r, c);
    else if (choice == 2)
      drop(r, c);
    else if (choice == 3)
      xfer(r, c);
    else if (choice == 4)
      chk(r, c);
    else if (choice == 5)
      common(r, c);
    else if (choice == 6)
      disp(r, c);
    else if (choice != 7)
      cout << "Invalid choice!\n";
  } while (choice != 7);
}
