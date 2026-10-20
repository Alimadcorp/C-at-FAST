#include<iostream>
using namespace std;

// Task 12 - Frequency

int q12() {
	char inp[2048];
	int freq[26]; // frequencies
	for (int i = 0; i < 26; i++) freq[i] = 0; // initialize
	int max = 0, maxIndex = -1;

	cout << "Enter something: ";
	cin.getline(inp, 2048);

	cout << endl;

	for (int i = 0; i < 2048; i++) {
		if (inp[i] == '\0') break;
		if (inp[i] >= 'A' && inp[i] <= 'Z') {
			inp[i] += 'a' - 'A'; // to lowercase
		}
		if (inp[i] >= 'a' && inp[i] <= 'z') {
			int id = inp[i] - 'a';
			freq[id]++;
			if (freq[id] > max) {
				max = freq[id];
				maxIndex = id;
			}
		}
	}

	cout << "Most frequent character: " << static_cast<char>(maxIndex + 'a');
	cout << endl << "Frequency: " << max;

	cout << endl;

	return 0;
}