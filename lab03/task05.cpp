#include<iostream>
using namespace std;

// Task 05 - Temperature Converter
// Input temperature in Celsius, output in Fahrenheit and Kelvin.

int q5() {
	double celsius, farhenheit, kelvin;

	cout << "Enter temprature in celcius (C): ";
	cin >> celsius;

	farhenheit = (celsius * 9.0/5) + 32;
	kelvin = celsius + 273.15;

	cout << endl << "Temprature in Farhen (F): " << farhenheit << endl;
	cout << "Temprature in Celius (C): " << celsius << endl;
	cout << "Temprature in Kelvin (K): " << kelvin << endl;

	return 0;
}