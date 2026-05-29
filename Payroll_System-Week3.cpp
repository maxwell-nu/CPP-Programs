//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Calculates Pay and Prints a PaySlip With a Rate Per Hour of 10

#include <iostream>
using namespace std;

int overtimeHours, salary, overtimePay, rph, netSalary;
string name;

void getEmployeeDetails(){
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> salary;
    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;
}

void calculateOvertimePay(){
    rph = 10;
    overtimePay = overtimeHours * rph;
}

void calculateNetSalary(){
    netSalary = salary + overtimePay;
}

void displayPayslip(){
    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: " << salary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Rate per hour: " << rph << endl;
    cout << "Net Salary: " << netSalary << endl;
}

int main(){
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    return 0;
}
