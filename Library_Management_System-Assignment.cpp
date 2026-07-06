//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Library Management System using inheritance and constructors

#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
};

class LibraryMember: public Person{
    private:
    int memberID;
    int booksBorrowed;

    public:
    LibraryMember(string n, int memID, int borBooks){
        name = n;
        memberID = memID;
        booksBorrowed = borBooks;
    }

    int getMemberID(){
        return memberID;
    }
    int getBooksBorrowed(){
        return booksBorrowed;
    }
    
};

class PremiumMember: public LibraryMember{
    private:
    double membershipFee;

    public:
    PremiumMember(string n, int memID, int borBooks, double memFee) : LibraryMember(n, memID, borBooks){
        membershipFee = memFee;
    }

    double getMembershipFee(){
        return membershipFee;
    }
};

int main(){

    PremiumMember vip("John Doe", 626, 5, 40);
    cout << "Name: " << vip.getName() << endl
    << "Membership ID: " << vip.getMemberID() << endl
    << "Borrowed Books: " << vip.getBooksBorrowed() << endl
    << "Membership Fee: £" << vip.getMembershipFee();

    return 0;
}
