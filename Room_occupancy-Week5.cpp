//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Room occupancy tracker

#include <iostream>
using namespace std;

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    cout << "Enter room occupancy (1 = occupied, 0 = vacant):" << endl;
    for (int floor = 0; floor < 5; floor++) {
        cout << "Floor " << floor + 1 << ":" << endl;
        for (int room = 0; room < 10; room++) {
            cout << "  Room " << room + 1 << ": ";
            cin >> occupancy[floor][room];
        }
    }

    cout << "\nOccupancy Summary:" << endl;
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << floor + 1 << " - Occupied: " << occupied
             << ", Vacant: " << vacant << endl;
    }

    return 0;
}

