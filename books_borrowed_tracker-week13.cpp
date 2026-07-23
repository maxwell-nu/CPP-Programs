//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Inputs book titles and writes them into a file named "borrowed_books.txt".

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string title;
    char choice;
    
    do {
        cout << "Enter book title: ";
        getline(cin, title);
        
        ofstream outFile("borrowed_books.txt", ios::app);
        
        if (outFile.is_open()){
            outFile << title << endl;
            outFile.close();
            
            cout << "Book title \"" << title << "\" has been stored successfully!" << endl;
        } else {
            cout << "Error: Could not open file!" << endl;
        }
        
        cout << "\nAdd another book? (y/n): ";
        cin >> choice;
        cin.ignore();
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "\nProgram ended. All entries saved in borrowed_books.txt" << endl;
    
    return 0;
}