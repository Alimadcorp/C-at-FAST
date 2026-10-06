#include<iostream>
using namespace std;

// Written by Muhammad Ali
// Initially on 9/5/2026
// Lab 05 - 9/29/2026
// As there were issues with multiple files, this code exists to launch the needed one
// https://github.com/Alimadcorp/C-at-FAST/blob/master/lab05/main.cpp

int q1(); int q2(); int q3(); int q4(); int q5(); int q6(); int q7(); int q8(); int q9(); int q10(); int q11(); int q12();
// predefined all functions for each task

void clrscr() { // clear screen command is different for windows and linux operating systems
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#else
    system("clear");
#endif
}

int main() {
start:
    clrscr();
    int target = 0, r = 0; // r for result, if not 0, the program crashed..
    cout << "Lab 05" << endl << "Enter question number (1-12): ";
    if (!(cin >> target)) { cin.clear(); cin.ignore(10000, '\n'); goto start; }
run:
    clrscr();
    switch (target) {
    case 1: r = q1(); break;
    case 2: r = q2(); break;
    case 3: r = q3(); break;
    case 4: r = q4(); break;
    case 5: r = q5(); break;
    case 6: r = q6(); break;
    case 7: r = q7(); break;
    case 8: r = q8(); break;
    case 9: r = q9(); break;
    case 10: r = q10(); break;
    case 11: r = q11(); break;
    case 12: r = q12(); break;
    default: goto start;
    }

    if (r == 0) {
        cout << endl << "Enter g to select different question, n for next question, enter q to quit: ";
    }
    else {
        cout << endl << "Program crashed with exit code of " << r << " press r to retry, g to select a different question, n for next question, enter q to quit: ";
    }

    char o;
    if (!(cin >> o)) { cout << "\nWhy...\n\n"; return 0; }

    switch (o) {
    case 'n': case 'N': target++; if (target > 12) target = 1;
    case 'r': case 'R': goto run;
    case 'g': case 'G': goto start;
    case 'q': case 'Q': cout << "\nQuitting...\n\n"; return 0;
    default: cout << "\nQuitting anyways -_-\n\n";
    }

    return 0;
}