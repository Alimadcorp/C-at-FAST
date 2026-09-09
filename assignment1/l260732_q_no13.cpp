#include<iostream>
using namespace std;

int q13() {
    int age, clearance, overrideCode, access;
    cout << "Question 13. Logical Access Matrix" << endl << endl;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter clearance: ";
    cin >> clearance;
    cout << "Enter override code: ";
    cin >> overrideCode;

    access = (age >= 18 && clearance > 3) || overrideCode == 999;

    cout << endl << "Access granted: " << access << endl;
    return 0;
}