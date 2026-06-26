//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Bank Account System using Constructors and Destructors

#include<iostream>
using namespace std;

class BankAccount{
    public:
    string name, acc_number;
    int balance;

    BankAccount(string x, string y, int z){
        name = x;
        acc_number = y;
        balance = z;
        cout << "Account successfully created" << endl;
    }
    
    void displayAccount(){
        cout << "Account Holder Name: " << name << endl << "Account Number: " << acc_number << endl << "Account Balance: " << balance << " KES" << endl;
    }

    ~BankAccount(){
        cout << "Account closed successfully";
    }
};

int main(){

    BankAccount bankObj("Maxwell Mwangi", "BCS-05-0001/2025", 600542);
    bankObj.displayAccount();
    return 0;
}