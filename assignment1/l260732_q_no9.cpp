#include<iostream>
#include<math.h>
using namespace std;

int q9() {
    double P, r, n, t, A, interest;
    
    cout << "Question 9: Compound Interest Calculator" << endl << endl;
    cout << "Enter principal amount: ";
    cin >> P;
    cout << "Enter annual interest rate: ";
    cin >> r;
    cout << "Enter compounds per year: ";
    cin >> n;
    cout << "Enter number of years: ";
    cin >> t;

    A = P * pow(1 + ((r / 100.0) / n), n * t);
    interest = A - P;

    cout << endl << "Final amount: " << A;
    cout << endl << "Compond interest: " << interest << endl;
    return 0;
}