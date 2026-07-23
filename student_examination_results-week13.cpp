//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Reads student exam results from a results.dat file then provides output. Will show an error message if the file isn't found.

#include <iostream>
#include <fstream>

using namespace std;

struct Student{
    char name[100];
    char regNumber[20];
    int totalMarks;
};

int main(){
    Student student;
    ifstream inFile("results.dat", ios::binary);
    
    if (!inFile.is_open()){
        cout << "Error: Could not open file!" << endl;
        return 1;
    }
    
    cout << "Student Records:" << endl;
    
    while (inFile.read((char*)&student, sizeof(student))){
        cout << "Name: " << student.name << endl;
        cout << "Marks: " << student.totalMarks << endl;
    }
    
    inFile.close();
    return 0;
}