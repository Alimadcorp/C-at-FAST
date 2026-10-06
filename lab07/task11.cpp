#include<iostream>
using namespace std;

// Task 11 - Merging sorted arrays

int q11() {
	int array1[5];
	int array2[5];
	int merged[10];

	cout << "Enter " << 5 << " numbers separated by spaces: ";
	for (int i = 0; i < 5; i++) {
		cin >> array1[i];
	}
	cout << "Enter " << 5 << " numbers separated by spaces: ";
	for (int i = 0; i < 5; i++) {
		cin >> array2[i];
	}

	cout << endl;

	int i = 0, j = 0, k = 0;
	while (i < 5 && j < 5) { // add smaller next elements to merged array
		if (array1[i] > array2[j]) {
			merged[k] = array2[j];
			j++; k++;
		}
		else {
			merged[k] = array1[i];
			i++; k++;
		}
	}
	while (i < 5) { // add leftover from array1
		merged[k] = array1[i];
		i++; k++;
	}
	while (j < 5) { // add leftover from array2
		merged[k] = array2[j];
		j++; k++;
	} // only one of these two while loops will run, as only one array will finish before the other
	for (int n = 0; n < 10; n++) {
		cout << merged[n] << " ";
	}

	cout << endl;
	return 0;
}