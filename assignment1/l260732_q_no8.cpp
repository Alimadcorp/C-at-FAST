#include<iostream>
using namespace std;

int q8() {
    int hour, minute, second, nHour, nMinute, nSecond;
    int secondsToAdd;
    cout << "Question 8: Digital Clock Calculation" << endl << endl;
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minute: ";
    cin >> minute;
    cout << "Enter second: ";
    cin >> second;
    cout << "Enter seconds to add: ";
    cin >> secondsToAdd;

    int totalSeconds = (hour * 3600) + (minute * 60) + second;
    totalSeconds = (totalSeconds + secondsToAdd) % 86400;
    nHour = totalSeconds / 3600;
    nMinute = (totalSeconds % 3600) / 60;
    nSecond = totalSeconds % 60;

    cout << endl << "New time: " << nHour << ":" << nMinute << ":" << nSecond << endl;
    return 0;
}