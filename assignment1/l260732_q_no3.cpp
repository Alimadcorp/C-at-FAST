#include<iostream>
using namespace std;

int q3() {
    int d1, d2, d3, t1, t2, t3;
    int totalDistance, totalTime;
    double average, v2, speedDev2;

    cout << "Question 3: The Relay Race Analyst" << endl << endl;
    cout << "Enter distance travelled by runner one: ";
    cin >> d1;
    cout << "Enter time taken by runner one: ";
    cin >> t1;
    cout << "Enter distance travelled by runner two: ";
    cin >> d2;
    cout << "Enter time taken by runner two: ";
    cin >> t2;
    cout << "Enter distance travelled by runner three: ";
    cin >> d3;
    cout << "Enter time taken by runner three: ";
    cin >> t3;

    totalDistance = d1 + d2 + d3;
    totalTime = t1 + t2 + t3;
    average = totalDistance / static_cast<float>(totalTime);
    v2 = (d2 / static_cast<float>(t2));
    speedDev2 = v2 - average;

    cout << endl << "Average speed: " << average;
    cout << endl << "Speed of runner two: " << v2;
    cout << endl << "Deviation of runner two's speed from teh avarage: " << speedDev2 << endl;

    return 0;
}