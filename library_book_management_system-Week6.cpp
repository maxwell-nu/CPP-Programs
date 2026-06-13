//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Library books management system

#include <iostream>
using namespace std;
int available, borrowed;

class Book {

    public:
    string bookTitle, author;
    int availableCopies;


    void inputDetails(){

        cout << "Enter Book Title: ";
        getline(cin, bookTitle);
        cout << "Enter Author: ";
        getline(cin, author);
    };

    int borrowBook(){
         
        availableCopies = 20;
        cout << "How many copies would you like to borrow(1-20): ";
        cin >> borrowed;
        return available = availableCopies - borrowed;
    };

    void displayDetails(){

        cout << "\nBook Title: " << bookTitle << endl
        << "Author: " << author << endl << "Borrowed: " << borrowed << endl << "Remaining Copies: " << available << endl;
    };

};

int main(){

    Book book_obj;
    book_obj.inputDetails();
    book_obj.borrowBook();
    book_obj.displayDetails();
        
    return 0;
}
