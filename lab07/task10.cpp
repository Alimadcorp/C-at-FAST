#include<iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Task 10 - Sorting arrays WITH QUICK SORT BECAUSE YES

int q10() {
	const int l = 8;
	int array[l];

	cout << "Enter " << l << " numbers separated by spaces: ";
	for (int i = 0; i < l; i++) {
		cin >> array[i];
	}

	cout << endl;

    auto start = high_resolution_clock::now();
    int stack[8], top = 0;
    // push index 0 and 7 (boundaries) to stack
    stack[top] = 0; top++;
    stack[top] = 7;
    // while stack is not empty
    while (top >= 0) {
        // pop the left and right boundaries
        int h = stack[top]; top--;
        int l = stack[top]; top--;
        int pivot = array[h]; // choose the last element's value as pivot
        int i = l - 1;
        for (int j = l; j < h; j++) { // loop from lower to higher
            if (array[j] <= pivot) { // if value is lower than the pivot
                i++;
                // xor swap
                if (i != j) (array[i] ^= array[j]), (array[j] ^= array[i]), (array[i] ^= array[j]); 
                // swap i and j
            }
        }
        // place the pivot into position
        if(i + 1 != h) (array[i + 1] ^= array[h]), (array[h] ^= array[i + 1]), (array[i + 1] ^= array[h]);
        // swap i + 1 and h
        int p = i + 1; // p is the finalized pivot index
        if (p - 1 > l) { // if there are elements on the left side of the pivot, push to stack
            top++;
            stack[top] = l; top++;
            stack[top] = p - 1;
        }
        if (p + 1 < h) { // same for right side
            top++;
            stack[top] = p + 1; top++;
            stack[top] = h;
        }
    }

    auto duration = duration_cast<nanoseconds>(high_resolution_clock::now() - start);
	cout << "Sorted array: ";
	for (int i = 0; i < l; i++) {
		cout << array[i] << " ";
	}
    cout << endl << "Sorted in " << duration.count() << "ns";

	cout << endl;
	return 0;
}