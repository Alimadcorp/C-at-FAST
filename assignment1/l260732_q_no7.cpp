#include<iostream>
using namespace std;

int q7() {
    int num, sum, reverse;
    int d1, d2, d3; // digiets 1 to four, d1 is thousands place

    cout << "Question 7: Three-Digit Number Analysis" << endl << endl;
    cout << "Enter a number: ";
    cin >> num;
    
    d1 = num / 100;
    d2 = (num % 100) / 10;
    d3 = num % 10;

    sum = d1 + d2 + d3;
    reverse = d3 * 100 + d2 * 10 + d1;
    
    cout << endl << "Hundreds digit: " << d1;
    cout << endl << "Tens digit: " << d2;
    cout << endl << "Ones digit: " << d3;
    cout << endl << "Sum of digits: " << sum;
    cout << endl << "Digits in reverse: " << reverse << endl;
    return 0;
}