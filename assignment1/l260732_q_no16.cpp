#include<iostream>
using namespace std;

int q16() {
    int seconds, hrs, min, sec;

    cout << "Question 16. Digital Clock Converter" << endl << endl;
    cout << "Enter seconds: ";
    cin >> seconds;

    hrs = seconds / 3600;
    sec = seconds % 3600;
    min = sec / 60;
    sec = sec % 60;

    cout << endl << "Hours: " << hrs << " Minutes: " << min << " Seconds: " << sec << endl;
    return 0;
}