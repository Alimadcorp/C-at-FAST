#include<iostream>
using namespace std;

// Task 04 - Area

int area(int width) { // always +ve
	return width * width;
}

int area(int width, int height) {
	int area = width * height;
	return area < 0 ? -area : area; // make sure +ve
}

int q4() {
	int a; int w, h;
	cout << "Enter width of square: ";
	cin >> a;
	cout << "Enter width of rectangle: ";
	cin >> w;
	cout << "Enter height of rectangle: ";
	cin >> h;

	cout << "Area of sq: " << area(a) << endl;
	cout << "Area of rect: " << area(w, h) << endl;
	cout << endl;

	return 0;
}