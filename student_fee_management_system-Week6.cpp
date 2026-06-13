//Name: Maxwell Mwanngi
//Reg No: BCS-05-0001/2025
//Purpose: A fee management system using classes and objects

#include <iostream>
using namespace std;
int payment, remainingFee;

class Student{
    public:
    string studentName, admissionNumber;
    int feeBalance = 100000;

    void inputStudent(){
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Fee Payment Amount: ";
        cin >> payment;
    }

    int makePayment(){
        return remainingFee = feeBalance - payment;
    }

    void displayStatus(){
        cout << "\nStudent Name: " << studentName << endl
        << "Admission Number: " << admissionNumber << endl
        << "Remaining Fee Balance: " << remainingFee;
    }

};

int main(){

        Student StudentObj;
        StudentObj.inputStudent();
        StudentObj.makePayment();
        StudentObj.displayStatus();

        return 0;
    };