#include<iostream>
using namespace std;
int main() {
    unsigned long input = 0; // 0 - 4 294 967 295 (2 ^ 32)
    unsigned long pow = 2147483648; // 2 ^ 31


    cout << "Enter a number: ";
    cin >> input;
    cout << endl;

    for (int i = 31; i >= 0; i--) {
        if (input > pow) {
            cout << "1";
            input -= pow;
        } else {
            cout << "0";
        }
        pow /= 2;
    }

    return 0;
}