#include<iostream>
using namespace std;

int q1() {
    int p0, t, finalPopulation;
    
    cout << "Question 1: The Bacterial Outbreak" << endl << endl;
    cout << "Enter initial population: ";
    cin >> p0;
    cout << "Enter minutes taken per cycle: ";
    cin >> t;

    finalPopulation = p0 * 8;

    cout << endl << "Time elapsed: " << (t * 3) / 60 << "h " << (t * 3) % 60;
    cout << endl << "Final population: " << finalPopulation; // simply doubled thrice
    cout << endl;

    return 0;
}