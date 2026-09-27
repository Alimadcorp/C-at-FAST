#include<iostream>
using namespace std;

int main() {
    int size = 67;
    if (size % 2 == 0) size++; // must always be odd
    int center = (size + 1) / 2;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            int dx = center - i;
            int dy = center - j;
            if (dx < 0) dx = -dx;
            if (dy < 0) dy = -dy;
            if (dx + dy <= size / 2) { cout << "*"; }
            else { cout << " "; }
        }
        cout << endl;
    }
    return 0;
}