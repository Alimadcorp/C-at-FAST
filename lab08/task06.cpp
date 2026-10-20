#include<iostream>
using namespace std;

// Task 06 - To Uppercase

int q6() {
	char inp[2048];
	int m = 0; bool pal = true;

	cout << "Enter something: ";
	cin.getline(inp, 2048);

	cout << endl;

	for (int i = 0; i < 2048; i++) {
		if (inp[i] == '\0') break;
		if (inp[i] >= 'a' && inp[i] <= 'z') {
			inp[i] -= 'a' - 'A';
		}
		cout << inp[i];
	}

	cout << endl;

	return 0;
}