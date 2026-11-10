#include<iostream>
using namespace std;

// 13 October 2026
// Q3: Transaction Simulator 1000X Limited Edition
// Attempted by 26L-0732 Muhammad Ali

int main() {
	unsigned long long int balance = 1000;
	long long int transaction = 0; // munny currently being transacted
	unsigned short int rejectedWithdrawls = 0;
	cout << "Enter an amount to transact, (positive for deposit, negative for withdrawl, zero to end session): ";
	cin >> transaction;

	// processing
	while (rejectedWithdrawls < 3) {
		if (transaction == 0) { cout << "Thanks for choosing us!" << endl; break; }
		else if (transaction > 0) {
			balance += transaction;
			cout << "Deposit of " << transaction << " was successful.";
		}
		else if (transaction < 0) {
			if (balance > -transaction) {
				balance += transaction;
				cout << "Withdrawl of " << -transaction << " was successful.";
			}
			else {
				if (rejectedWithdrawls < 2) {
					cout << endl << "Insufficient balance. You have " << 2 - rejectedWithdrawls << " invalid attempts left.";
					rejectedWithdrawls++;
				}
				else {
					cout << endl << "Too many invalid requests, freezing account.";
					rejectedWithdrawls++;
					continue;
				}
			}
		}
		cout << endl << endl << "Enter an amount to transact: ";
		cin >> transaction;
	}

	// output
	cout << endl << balance << " is your final balance" << endl;
	cout << rejectedWithdrawls << " withdrawls were rejected";

	cout << endl;
	return 0;
}