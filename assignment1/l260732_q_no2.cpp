#include<iostream>
#include<math.h>
using namespace std;

int q2() {
    int withdrawlAmt;

    cout << "Question 2: The ATM Cash Dispenser" << endl << endl;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawlAmt;

    cout << endl << "Rs. 5000 notes: " << floor(withdrawlAmt / 5000.0) << endl;
    cout << "Rs. 1000 notes: " << floor((withdrawlAmt % 5000) / 1000.0) << endl;
    cout << "Rs.  100 notes: " << floor((withdrawlAmt % 1000) / 100.0) << endl;
    cout << "Rs.   10 notes: " << floor((withdrawlAmt % 100) / 10.0) << endl;

    return 0;
}