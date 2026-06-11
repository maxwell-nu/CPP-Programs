//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Hotel management system using arrays

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    srand(time(0));
    // ========== 1D ARRAY – WEEKLY REVENUE TRACKER ==========
    double revenue[7];
    double totalRevenue = 0.0;

    cout << "=== Weekly Revenue Tracker ===" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }
    double averageRevenue = totalRevenue / 7.0;

    cout << fixed << setprecision(2);
    cout << "Total weekly revenue: KES" << totalRevenue << endl;
    cout << "Average daily revenue: KES" << averageRevenue << endl << endl;

    // ========== 2D ARRAY – ROOM OCCUPANCY (ONE BRANCH) ==========
    int occupancy[5][10];
    int occupiedTotal = 0, vacantTotal = 0;

    cout << "=== Room Occupancy (One Branch) ===" << endl;
    cout << "Simulating random occupancy" << endl;

    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupiedTotal++;
            else
                vacantTotal++;
        }
    }

    for (int floor = 0; floor < 5; floor++) {
        int occupiedFloor = 0, vacantFloor = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupiedFloor++;
            else
                vacantFloor++;
        }
        cout << "Floor " << floor + 1 << " - Occupied: " << occupiedFloor
             << ", Vacant: " << vacantFloor << endl;
    }
    cout << "Total for branch - Occupied: " << occupiedTotal
         << ", Vacant: " << vacantTotal << endl << endl;

    // ========== 3D ARRAY – MULTIPLE BRANCHES ==========
    int chain[3][5][10];
    int totalOccupiedAll = 0;

    cout << "=== Multiple Branches (3 branches) ===" << endl;
    cout << "Assigning random occupancy to each room..." << endl;

    for (int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupiedAll++;
                }
            }
        }
        cout << "Branch " << branch + 1 << " has " << branchOccupied
             << " occupied rooms." << endl;
    }

    cout << "Total occupied rooms across all branches: " << totalOccupiedAll << endl;

    return 0;
}