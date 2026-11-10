#include<iostream>
using namespace std;

// 13 October 2026
// Q4: Butterfly pattern
// Attempted by 26L-0732 Muhammad Ali

int main() {
	// declaration and input
	int size = 0, d = 0; // d is the desired distance
	int inc = -1; // increment per loop
	cout << "Enter size: ";
	cin >> size;
	if (size < 4) {
		cout << "Invalid size, must be greater than 3." << endl;
		return 0;
	}
	d = size; // initially d is size
	cout << endl;
	
	// method 1
	//while (d < size + 1) { // while d has not taken a round trip aback to size + 1
	//	for (int x = 1; x <= size * 2; x++) { // for each x in size * 2 elements
	//		if ((x > size ? x - size : size - x + 1) >= d) { // if the absolute horizontal distance is greater than d then print
	//			cout << "*";
	//		}
	//		else {
	//			cout << " "; // else leave empty
	//		}
	//	}
	//	d += inc; // first half, keep decrementing distance, reducing the empty starts in between
	//	if (d <= 0) { // when d reaches zero after half loop, set the increment to increase d, and reset d to 2
	//		inc = -inc;
	//		d = 2;
	//	}
	//	cout << endl;
	//}

	// said method
	for (d = size; d > 0; d--) { // d from size to 1
		for (int x = 1; x <= size * 2; x++) { // for each x in size * 2 elements
			if ((x > size ? x - size : size - x + 1) >= d) { // if the absolute horizontal distance is greater than d then print
				cout << "*";
			}
			else {
				cout << " "; // else leave empty
			}
		}
		cout << endl;
	}
	for (d = 2; d <= size; d++) { // d from 2 to size
		for (int x = 1; x <= size * 2; x++) { // for each x in size * 2 elements
			if ((x > size ? x - size : size - x + 1) >= d) { // if the absolute horizontal distance is greater than d then print
				cout << "*";
			}
			else {
				cout << " "; // else leave empty
			}
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}