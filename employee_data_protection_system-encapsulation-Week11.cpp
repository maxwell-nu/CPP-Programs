//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose:  Employee Data Protection System using encapsulation

#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    int id;
    double bSalary;

    public:
    void setEmployeeDetails(string n, int i, double bs){
        name = n;
        id = i;
        bSalary = bs;
    }

    double calculateSalary(){
        return bSalary + (0.10 * bSalary);
    }

    void displayEmployeeDetails(){
        cout << "Name: " << name << endl
        << "Employee ID: " << id << endl
        << "Basic Salary: £" << bSalary << endl
        << "Net Salary: £" << calculateSalary();
    }
};

int main(){
    Employee user;
    user.setEmployeeDetails("Maxwell Mwangi", 101, 3000);
    user.displayEmployeeDetails();
    return 0;
}