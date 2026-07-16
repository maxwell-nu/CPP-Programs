//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: A shape area system that uses abstraction

#include <iostream>
#include <cmath>

using namespace std;

class Shape{
    protected:
    double radius, length, width;

    public:
    void virtual calculateArea() = 0;
};

class Circle: public Shape{

    public:

    Circle(double r){
        radius = r;
    }

    void calculateArea() override{
        cout << "Area of the Circle: " << M_PI * pow(radius, 2) << endl;
    }
};

class Rectangle: public Shape{
    public:

    Rectangle(double l, double w){
        length = l;
        width = w;
    }

    void calculateArea() override{
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main(){

    Shape* circptr = new Circle(10);
    circptr->calculateArea();

    Shape* recptr = new Rectangle(20, 10);
    recptr->calculateArea();
    
    delete circptr;
    delete recptr;
}