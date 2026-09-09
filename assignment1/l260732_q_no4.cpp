#include<iostream>
using namespace std;

int q4() {
    int id, code, mirrorId;
    int d1, d2, d3, d4; // digiets 1 to four, d1 is thousands place

    cout << "Question 4: The ID Verification System" << endl << endl;
    cout << "Enter your ID: ";
    cin >> id;
    
    d1 = id / 1000;
    d2 = (id % 1000) / 100;
    d3 = (id % 100) / 10;
    d4 = id % 10;

    code = (d1 * 4 + d2 * 3 + d3 * 2 + d4) % 9;
    mirrorId = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    
    cout << endl << "Digits: " << d1 << " " << d2 << " " << d3 << " " << d4;
    cout << endl << "Verification code: " << code;
    cout << endl << "Mirrored ID: " << mirrorId << endl;
    return 0;
}