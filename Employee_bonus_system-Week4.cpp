//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Uses loop to get details for 5 employees while outputting their names, salaries and bonuses

#include<iostream>
using namespace std;

int main(){

    float b_salary, t_salary, bonus;
    const float bonus_rate = 0.05;
    string name;
    
    for(int i=1; i<=5; i++){
    cout << "\nEnter Employee Name: ";
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> b_salary;
    bonus = bonus_rate * b_salary;
    t_salary = b_salary + bonus;

    cout << "\nName: " << name << endl
    << "Basic Salary: " << b_salary << endl
    << "Bonus: " << bonus << endl
    << "Total Salary: " << t_salary << endl;

    cin.ignore();

    }

    return 0;
}