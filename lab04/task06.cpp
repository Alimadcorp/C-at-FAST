#include<iostream>
using namespace std;

// Task 06 - Menu based area calculator

int q6() {
    int choice = -1;
    double length, width, side, area;

    while (choice != 0) {
        cout << endl << "--- Area Calculator ---\n\n";
        cout << "1. Rectangle\n";
        cout << "2. Square\n";
        cout << "0. Exit\n\n";
        cout << "Enter your choice (0-2): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            
            area = length * width;

            cout << endl << "Area of the Rectangle: " << area << endl;
        }
        else if (choice == 2) {
            cout << "Enter the length of the side: ";
            cin >> side;
            
            area = side * side;

            cout << endl << "Area of the Square: " << area << endl;
        }
        else if (choice == 0) {
            cout << "Exiting program. Goodbye! P:" << endl;
            cout << "Written by Muhammad Ali" << endl;
        }
        else {
            cout << "Invalid choice. Please select 1, 2, or 0." << endl;
        }
    }

    return 0;
}