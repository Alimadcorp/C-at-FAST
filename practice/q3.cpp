// Create a banking program with a main loop that offers "Deposit", "Withdraw",
// or "Exit". Write a function processTransaction that takes the accountBalance
// by reference and the transactionAmount by value. If a withdrawal exceeds the
// balance, reject it without altering the balance. Keep asking for transactions
// until the user exits.

#include <iostream>
using namespace std;

void processTransaction(int &acountBalance, int transactionAmount) {
  if (transactionAmount == 0)
    cout << "Invalid amt" << endl;
  if (acountBalance + transactionAmount < 0) {
    cout << "Insifficuent balance" << endl;
    return;
  }
  acountBalance += transactionAmount;
}

int main() {
  int accountBalance = 0;
  cout << "Enter Initial Account Balance = ";
  cin >> accountBalance;
  while (1) {
    cout << "Enter 1, to Deposit." << endl;
    cout << "Enter 2, to withdraw." << endl;
    cout << "Enter 3, to exit." << endl;
    int choise;
    cout << "Enter your chioce: ";
    cin >> choise;
    if (choise == 1) {
      int transactionAmount;
      cout << "Enter deposit amount = ";
      cin >> transactionAmount;
      if (transactionAmount < 0) {
        cout << "Enter a +ve number" << endl;
        continue;
      }
      processTransaction(accountBalance, transactionAmount);
    } else if (choise == 2) {
      int transactionAmount;
      cout << "Enter withdraw amount = ";
      cin >> transactionAmount;
      if (transactionAmount < 0) {
        cout << "Enter a +ve number" << endl;
        continue;
      }
      processTransaction(accountBalance, -transactionAmount);
    } else if (choise == 3) {
      break;
    } else {
      cout << "Invaid choise" << endl;
    }
  }
  cout << "final balance; " << accountBalance;
}