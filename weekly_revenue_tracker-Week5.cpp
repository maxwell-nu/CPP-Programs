//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Revenue tracker for the week

#include <iostream>
using namespace std;

int main() {
    double revenue[7];
    double total = 0.0;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];
        total += revenue[i];
    }

    double average = total / 7.0;

    cout << "Total weekly revenue: " << total << endl;
    cout << "Average daily revenue: " << average << endl;

    return 0;
}