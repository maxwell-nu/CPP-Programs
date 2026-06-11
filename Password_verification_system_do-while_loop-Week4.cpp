//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Password verification system

#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctUsername = "admin";
    const string correctPassword = "1234";
    string username, password;

    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted" << endl;
            break;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }
    } while (true);

    return 0;
}