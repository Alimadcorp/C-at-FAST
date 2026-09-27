#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n, ln = -1;
    cout << "Enter number: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit == ln) { cout << "Yes"; return 0; } 
        n /= 10;
        ln = digit;
    }
    cout << "No";
    return 0;
}
