
//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Code for allocating the scholarship approval of a student

#include <iostream>

int main() {

    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;
    using std::getline;

    string name, scholarship;
    int marks, attendance;

    cout << "Enter Student name: ";
    getline(cin, name);

    cout << "Enter Exam marks(0-100): ";
    cin >> marks;

    cout << "Enter Attendance percentage(0-100): ";
    cin >> attendance;

    if(marks >= 70){
        if(attendance >= 80){
            scholarship = "Full Scholarship";
        }
        else{
            scholarship = "Partial Scholarship";
        }
    }
    else if (marks >= 50){
        if(attendance >= 85){
            scholarship = "Partial Scholarship";
        }
        else{
            scholarship = "No Scholarship";
        }
    }
    else{
        scholarship = "No Scholarship";
    }

    cout << "Name: " << name << endl;
    cout << "Scholarship Status: " << scholarship;

    return 0;
}
