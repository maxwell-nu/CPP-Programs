//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Calculates Bill and Prints Amount payable with a Rate Per Unit of 10

#include <iostream>
using namespace std;

int overtimeHours, units, overtimePay, rpu, bill, d_bill, p_bill;
string name;

void getCustomerDetails(){
    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Units Consumed: ";
    cin >> units;
}

void calculateBill(){
    rpu = 10;
    bill = units * rpu;
}

void applyDiscount(){
    if(units >= 100){
        
        p_bill = bill;
        d_bill = bill * 90/100;
        bill = d_bill;
    }
    else{
        p_bill = bill;
        d_bill = bill;
        }
}

void displayBill(){
    cout << "Customer Name: " << name << endl;
    cout << "Units: " << units << endl;
    cout << "Bill Before Discount: " << p_bill << endl;
    cout << "Bill After Discount: " << d_bill << endl;
    cout << "Amount Payable: " << bill << endl;
}

int main(){
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}