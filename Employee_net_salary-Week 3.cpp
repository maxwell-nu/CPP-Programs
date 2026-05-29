//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Code for calculating the net salary of an employee

#include <iostream>
using namespace std;

float basicPay (float hours, float rph){
    return (hours * rph);
}

int main(){

    float hours, rph, tax, net_pay;
    string name;
    cout << "Enter Employee Name: ";
    getline (cin, name);
    cout << "Enter Hours Worked: ";
    cin >> hours;
    cout << "Enter Rate per hour: ";
    cin >> rph;

    float b_pay = basicPay (hours, rph);

    if (b_pay >= 50000){

        tax = 0.2 * b_pay;
    }
    else if (b_pay < 50000 && b_pay >= 20000){

        tax = 0.1 * b_pay;
    }
    else {
        tax = 0;
    }

    net_pay = b_pay - tax;

    cout << "Employee Name: " << name << endl << "Net Pay: " << net_pay;

    return 0;
}
