#include<iostream>
using namespace std;

int q6() {
    int totalSeconds;
    int hours, minutes, seconds;

    cout << "Question 6: Time Conversion" << endl << endl;
    cout << "Enter total amount of seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << endl << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
    cout << endl;

    return 0;
}