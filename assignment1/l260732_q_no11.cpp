#include<iostream>
using namespace std;

int q11() {
    int math, physics, programming;
    double average;
    
    cout << "Question 11: Student Average Calculator" << endl << endl;
    cout << "Enter obtained marks in math: ";
    cin >> math;
    cout << "Enter obtained marks in physics: ";
    cin >> physics;
    cout << "Enter obtained marks in programming: ";
    cin >> programming;

    average = (math + physics + programming) / 3.0;

    cout << endl << "Average: " << average << endl;
    return 0;
}