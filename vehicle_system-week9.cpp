//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Vehicle System using Inheritance

#include<iostream>
using namespace std;

class Vehicle{
    public:
    string brand;
    int yom;

    void displayVehicle(string b, int y){
        brand = b;
        yom = y;

        cout << "Brand: " << brand << endl << "Year Of Manufacture: " << yom << endl;
    }
};

class Car: public Vehicle{
    public:
    int nod;
    double ec;

    void displayCar(int n, double e){
        nod = n;
        ec = e;

        cout << "Number Of Doors: " << nod << endl << "Engine Capacity: " << ec << "L" << endl;
    }
};

int main(){
    Car carObj;
    carObj.displayVehicle("BYD", 2020);
    carObj.displayCar(4, 5);

    return 0;
}