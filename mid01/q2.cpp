#include<iostream>
using namespace std;

// 13 October 2026
// Q2: Valleys and peaks counter
// Attempted by 26L-0732 Muhammad Ali

int main() {
	// declaration and input
	long long int numbers[20] = { 0 };
	unsigned int length = 0, peaks = 0, valleys = 0;
	cout << "Amount of digits to evaluate (enter length between 1 and 20): ";
	cin >> length;
	if (length < 1 || length > 20) {
		cout << "Out of range input, try again next time and tryna follow the instructions pliz." << endl;
	}
	cout << "Enter " << length << " space separated numbers: ";
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}
	cout << endl;

	// processing
	for (int i = 1; i < length - 1; i++) {
		if (numbers[i - 1] < numbers[i] && numbers[i + 1] < numbers[i]) { // neighbors are smaller
			peaks++;
			cout << "Peak at index " << i << endl;
		}
		if (numbers[i - 1] > numbers[i] && numbers[i + 1] > numbers[i]) { // neighbors are larger
			valleys++;
			cout << "Valley at index " << i << endl;
		}
	}

	// output
	cout << endl << "Total valleys: " << valleys << endl;
	cout << "Total peaks: " << peaks << endl;

	cout << endl;
	return 0;
}