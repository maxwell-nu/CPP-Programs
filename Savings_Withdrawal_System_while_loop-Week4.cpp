//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Uses while loop to withdraw inputted account balance until it is zero or if the withdrawn amount is greater than the balance

#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter initial account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "Enter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Insufficient balance. Withdrawal cancelled." << endl;
            break;
        }

        balance -= withdrawal;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }

    return 0;
}