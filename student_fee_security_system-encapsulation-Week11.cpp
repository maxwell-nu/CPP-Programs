//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Student Fee Security System using encapsulation

#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    string adm;
    double fee;
    double pay;


    public:
    void inputStudentData(string n, string a, double f){
        name = n;
        adm = a;
        fee = f;
        pay = 0;
    }
    double makePayment(double p){
        pay = p;
        return fee = fee - pay;
    }
    void displayStatus(){
        cout << "Name: " << name << endl
        << "Admission Number: " << adm << endl
        << "Fee Payment: KES" << pay << endl
        << "Remaining Fee balance: KES" << fee;
    }
};

int main(){
    Student user;
    user.inputStudentData("Maxwell Mwangi", "BCS-0001", 54000);
    user.makePayment(50000);
    user.displayStatus();
}