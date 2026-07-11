//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Payment system using polymorphism

#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
    virtual ~Shape() {} 
};

class Circle : public Shape {
    public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
    public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
    public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* shapePtr = nullptr;

    shapePtr = new Circle();
    shapePtr->draw(); 
    delete shapePtr;

    shapePtr = new Rectangle();
    shapePtr->draw(); 
    delete shapePtr;

    shapePtr = new Triangle();
    shapePtr->draw(); 
    delete shapePtr;

    return 0;
}