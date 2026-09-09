#include<iostream>
using namespace std;

int q10() {
    int chirpsPerMinute; //  i wonder who would count this :sob:
    double temperature;
    
    cout << "Question 10: Cricket Chirp Temperature Calculator" << endl << endl;
    cout << "Enter chirps per minute: ";
    cin >> chirpsPerMinute;

    temperature = 50 + (chirpsPerMinute - 40) / 4.0;

    cout << endl << "Temprature (F): " << temperature << endl;
    return 0;
}