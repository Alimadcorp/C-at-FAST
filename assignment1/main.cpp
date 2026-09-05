#include<iostream>
#include<conio.h>
using namespace std;

// Written by Muhammad Ali
// 9/5/2026
// As there were issues with multiple files, this code exists to launch the needed one
// 

int q1(); int q2(); int q3(); int q4(); int q5(); int q6(); int q7(); int q8(); int q9();
int q10(); int q11(); int q12(); int q13(); int q14(); int q15(); int q16(); int q17();
// predefined all functions

int main() {
	start:
	int target = 0;
	cout << endl << "Enter question number (1-17): ";
	cin >> target;
	switch (target) {
        case 1: q1(); break;
        case 2: q2(); break;
        case 3: q3(); break;
        case 4: q4(); break;
        case 5: q5(); break;
        case 6: q6(); break;
        case 7: q7(); break;
        case 8: q8(); break;
        case 9: q9(); break;
        case 10: q10(); break;
        case 11: q11(); break;
        case 12: q12(); break;
        case 13: q13(); break;
        case 14: q14(); break;
        case 15: q15(); break;
        case 16: q16(); break;
        case 17: q17(); break;
        default: goto start;
	}

	cout << endl << "Press or g to select different question, n for next question, press any other key to exit. ";
	char o = _getche();
    switch(o) {
        case 'n': case 'N': target++; // didnt add break so that after increment it goes back to start lol :P
        case 'g': case 'G': goto start;
    }
	cout << "\nQuitting...\n";
	return 0;
}