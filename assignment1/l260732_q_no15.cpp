#include<iostream>
using namespace std;

int q15() {
    double x, y;

    cout << "Question 15. Structural Stress Polynomial" << endl << endl;
    cout << "Enter x: ";
    cin >> x;

    y = 3 * x * x * x * x - 2 * x * x * x + x - 7;

    cout << endl << "Stress factor y: " << y << endl;
    return 0;
}