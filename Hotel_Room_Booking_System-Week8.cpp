//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Hotel Room Booking System using Constructors and Destructors

#include<iostream>
using namespace std;

class RoomBooking{
    public:
    string guestName;
    int roomNumber;
    int daysBooked;

    RoomBooking(string x, int y, int z){
        guestName = x;
        roomNumber = y;
        daysBooked = z;
        cout << "Room booking confirmed" << endl;
    }
    void displayBooking(){
        cout << "Guest Name: " << guestName << endl << "Room Number: " << roomNumber << endl << "Number of days booked: " << daysBooked << " days" << endl;
    }
    ~RoomBooking(){
        cout << "Booking ended, room released";
    }
};

int main(){

    RoomBooking roomObj("Dio Brando", 616, 5);
    roomObj.displayBooking();
    return 0;
}