//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Payment system using polymorphism

#include <iostream>
using namespace std;

class Payment{
    public:
    void processPayment(int amount) {
        cout << "Final Amount: KES" << amount << endl;
    }

    void processPayment(double amount, double fee) {
        double finalAmount = amount + fee;
        cout << "Final Amount: KES" << finalAmount << endl;
    }

    void processPayment(double amount, double fee, double discount) {
        double finalAmount = (amount + fee) - discount;
        cout << "Final Amount: KES" << finalAmount << endl;
    }
};

int main() {
    Payment paymentProcessor;

    paymentProcessor.processPayment(5000);
    paymentProcessor.processPayment(7500.55, 150.16);
    paymentProcessor.processPayment(3400.0, 45.0, 100.2);

    return 0;
}