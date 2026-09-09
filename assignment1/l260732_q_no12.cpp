#include<iostream>
using namespace std;

int q12() {
    double mass, velocity, kineticEnergy;
    
    cout << "Question 12. The Kinetic Energy Trap" << endl << endl;
    cout << "Enter mass: ";
    cin >> mass;
    cout << "Enter velocity: ";
    cin >> velocity;

    kineticEnergy = static_cast<double>(1)/2 * mass * velocity * velocity;

    cout << endl << "Kinetic energy: " << kineticEnergy << endl;
    return 0;
}