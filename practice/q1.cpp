#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter number = ";
  cin >> num;
  bool flag = true;

  while (flag) {
    if (num == 1) {
      flag = false;
      break;
    }
    if (num % 2 == 0) {
      num = num / 2;
      cout << num << endl;
    } else if (num % 2 == 1) {
      num = (3 * num + 1);
      cout << num << endl;
    }
  }

  return 0;
}