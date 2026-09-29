#include<iostream>
using namespace std;

// Quiz 1 | Muhammad Ali | BCS-1E | 26L-0732
// Question 1: Parking counter report

// Input: N (number of vehicles), hours[N] (hours per vehicle, entered one by one)
// Processing: "fee" rules:
//		First 2 hrs: 50 rs/hr
//		Beyond 2 hrs: 30 rs/hr
//		6 hrs or more: 10% discount overall
// Output: For each vehicle: Calculate "fee"
// Calculate total fee, amt of vehicles discounted, highest fee, vehicle index (non zero) of highest fee

int main() {
	int totalVehicles, totalFee = 0, discountedVehicles = 0, maxFee = 0; long long unsigned int maxFeeIndex = 0, mfiMult = 10; // max fee index multiplier
	cout << "Enter number of vehicles: ";
	cin >> totalVehicles;
	for (int i = 1; i <= totalVehicles; i++) {
		int hours = 0;
		int fee = 0;
		cout << "Enter hours for vehicle " << i << ": ";
		cin >> hours;
		if (hours <= 2) { 
			fee = 50 * hours; // 50 rs per hr for first 2 hrs 
		} else {
			fee += 100 + (hours - 2) * 30; // 30 rs per hr for beyond 2 hrs + the initial 2 hr fee
		}
		if (hours >= 6) {
			fee -= fee / 10; // 10% discount
			discountedVehicles++;
		}

		if (fee > maxFee) {
			maxFee = fee;
			maxFeeIndex = i;
			mfiMult = 10;
		}
		else if (fee == maxFee) {
			maxFeeIndex += i * mfiMult;
			mfiMult *= 10;
		}
		totalFee += fee;

		cout << "Vehicle " << i << " fee = Rs. " << fee << endl;
	}
	cout << endl;
	cout << "Total collection: Rs. " << totalFee << endl;
	cout << "Discounted vehicles: " << discountedVehicles << endl;
	cout << "Highest fee: Rs. " << maxFee << endl;
	cout << "Vehicle(s) with highest fee: ";
	while (maxFeeIndex > 0) {
		cout << maxFeeIndex % 10 << ", ";
		maxFeeIndex /= 10;
	}
	cout << endl;
	return 0;
}