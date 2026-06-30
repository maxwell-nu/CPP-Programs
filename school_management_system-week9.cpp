//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose:School Management System using Inheritance

#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    void displayPerson(string n, int a){
        name = n;
        age = a;
        cout << "Name: " << name << endl << "Age: " << age << endl;
    }
};

class Student: public Person{
    public:
    string admissionNumber, Class;

    void displayStudent(string adm, string cla){
        admissionNumber = adm;
        Class = cla;
        cout << "Admission Number: " <<admissionNumber << endl << "Class: " << Class << endl;
    }
};

int main(){

    Student studObj;
    studObj.displayPerson("Maxwell Mwangi", 19);
    studObj.displayStudent("BSC-05-0001/25", "L23");
    return 0;
}
