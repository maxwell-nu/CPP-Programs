//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: A hospital management system that uses abstraction

#include <iostream>

using namespace std;

class MedicalStaff{
    protected:
    string name, id;
    int salary, allowance, overtime;

    public:
    virtual void calculateSalary() = 0;

    void displayDetails(string n, string i){
        
        name = n;
        id = i;
        cout << "\nStaff Name: " << name << endl
        << "Staff ID: " << id << endl;
    }
};

class Doctor: public MedicalStaff{

    public:
    Doctor(int sal, int allow) {
        salary = sal;
        allowance = allow;
    }

    void calculateSalary() override {
        cout << "Doctor Salary: " << salary + allowance << endl;
    }
};

class Nurse : public MedicalStaff{

    public:
    Nurse(int sal, int ot) {
        salary = sal;
        overtime = ot;
    }

    void calculateSalary() override {
        cout << "Nurse Salary: " << salary + overtime << endl;
    }
};

int main(){

    MedicalStaff* docptr = new Doctor(2000, 350);
    docptr->displayDetails("John Doe", "DDT-051");
    docptr->calculateSalary();

    MedicalStaff* nurseptr = new Nurse(1000, 350);
    nurseptr->displayDetails("Jane Doe", "OBG-001");
    nurseptr->calculateSalary();
    
    delete docptr;
    delete nurseptr;
}