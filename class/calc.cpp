#include<iostream>
#include<conio.h>
using namespace std;

// Expression calculator
// 9/18/2026
// Written by Muhammad Ali

int main(){
	char _i1, _i2, _i3, _o1, _o2;
	// format: ( i1 o1 i2 ) o2 i3
	// where o* is an operator, i* is an integer
	
	cout << "Enter an expression: (";
	_i1 = _getche();
	_o1 = _getche();
	_i2 = _getche();
	cout << ")";
	_o2 = _getche();
	_i3 = _getche();
	cout << endl;

	int i1 = _i1 - 48; int i2 = _i2 - 48; int i3 = _i3 - 48;
	double inner = 0, res = 0;

	switch (_o1) {
	case '+':
		inner = i1 + i2;
		break;
	case '-':
		inner = i1 - i2;
		break;
	case '*':
		inner = i1 * i2;
		break;
	case '/':
		inner = i1 / static_cast<float>(i2);
		break;
	default:
		cout << endl << "Bad input";
		return -1;
	}

	switch (_o2) {
	case '+':
		res = inner + i3;
		break;
	case '-':
		res = inner - i3;
		break;
	case '*':
		res = inner * i3;
		break;
	case '/':
		res = inner / i3;
		break;
	default:
		cout << endl << "Bad input";
		return -1;
	}

	cout << endl << res << endl;

	_getch();
	return 0;
}