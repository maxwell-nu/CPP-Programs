//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Code for calculating the fine incurred due to delayed return of overdue books

#include <iostream>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    cout << "Enter the BookID: ";
    cin >> bookID;
    cout << "Enter Due Date: ";
    cin >> dueDate;
    cout << "Enter Return Date: ";
    cin >> returnDate;
    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 0){
        fineRate = 0;
        fineAmount = 0;
    }

    else if (daysOverdue < 8){
        fineRate = 20;
        fineAmount = daysOverdue * fineRate; 
    }    

    else if (daysOverdue < 15){
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;  
    }

    else {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate; 
    };

    cout<< "bookID: " << bookID << endl << "Due Date: " << dueDate
        << endl << "Return Date: " << returnDate << endl << "Days Overdue: " << daysOverdue
        << endl << "Fine Rate: " << fineRate << endl << "Fine Amount: " << fineAmount;



    return 0;
}
