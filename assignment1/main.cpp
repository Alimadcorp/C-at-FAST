#include<iostream>
using namespace std;

// Written by Muhammad Ali
// 9/5/2026
// As there were issues with multiple files, this code exists to launch the needed one
// https://github.com/Alimadcorp/C-at-FAST/blob/master/assignment1/main.cpp

int q1(); int q2(); int q3(); int q4(); int q5(); int q6(); int q7(); int q8(); int q9();
int q10(); int q11(); int q12(); int q13(); int q14(); int q15(); int q16(); int q17();
// predefined all functions

// TEMPORARY BLOCK
int q2() { cout << "Question 2 not implemented\n"; return 0; }
int q3() { cout << "Question 3 not implemented\n"; return 0; }
int q4() { cout << "Question 4 not implemented\n"; return 0; }
int q5() { cout << "Question 5 not implemented\n"; return 0; }
int q6() { cout << "Question 6 not implemented\n"; return 0; }
int q7() { cout << "Question 7 not implemented\n"; return 0; }
int q8() { cout << "Question 8 not implemented\n"; return 0; }
int q9() { cout << "Question 9 not implemented\n"; return 0; }
int q10() { cout << "Question 10 not implemented\n"; return 0; }
int q11() { cout << "Question 11 not implemented\n"; return 0; }
int q12() { cout << "Question 12 not implemented\n"; return 0; }
int q13() { cout << "Question 13 not implemented\n"; return 0; }
int q14() { cout << "Question 14 not implemented\n"; return 0; }
int q15() { cout << "Question 15 not implemented\n"; return 0; }
int q16() { cout << "Question 16 not implemented\n"; return 0; }
int q17() { cout << "Question 17 not implemented\n"; return 0; }
// :P

int main() {
	start:
    system("clear");
	int target = 0, r = 0; // r for result, if not 0, the program crashed..
	cout << endl << "Enter question number (1-17): ";
	cin >> target;
    run:
    cout << endl;
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
        case 13: r = q13(); break;
        case 14: r = q14(); break;
        case 15: r = q15(); break;
        case 16: r = q16(); break;
        case 17: r = q17(); break;
        default: goto start;
	}

    if (r == 0) {
	    cout << endl << "Enter g to select different question, n for next question, enter q to quit: ";
    } else {
        cout << endl << "Program crashed with exit code of " << r << " press r to retry, g to select a different question, n for next question, enter q to quit: ";
    }

	char o;
    cin >> o;

    switch(o) {
        case 'n': case 'N': target++; if (target > 17) target = 1;
        case 'r': case 'R': goto run;
        case 'g': case 'G': goto start;
        case 'q': case 'Q': cout << "\nQuitting...\n\n"; return 0;
        default: cout << "\nQuitting anyways -_-\n\n";
    }
	
	return 0;
}