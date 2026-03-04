#include <iostream>
using namespace std;


// FUNCTION OVERLOADING


class RentalCost
{
private:
    double dailyRate;
    int days;
    double taxRate;

public:

    // Constructor
    RentalCost(double rate = 0, int d = 0, double tax = 0)
    {
        dailyRate = rate;
        days = d;
        taxRate = tax;
    }

    //  Cost for one day
    double computeRentalCost(double rate)
    {
        return rate;
    }

    //  Cost for multiple days
    double computeRentalCost(double rate, int d)
    {
        return rate * d;
    }

    //  Cost with tax
    double computeRentalCost(double rate, int d, double tax)
    {
        double total = rate * d;
        double taxAmount = total * tax / 100;
        return total + taxAmount;
    }
};

int main()
{
    RentalCost obj;   // Object creation

    double rate, tax;
    int days;

    cout << "Enter daily rate: ";
    cin >> rate;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Enter tax percentage: ";
    cin >> tax;

    cout << "\nCost for 1 day: "
         << obj.computeRentalCost(rate) << endl;

    cout << "Cost for multiple days: "
         << obj.computeRentalCost(rate, days) << endl;

    cout << "Final cost with tax: "
         << obj.computeRentalCost(rate, days, tax) << endl;

    return 0;
}
    


// CONSTRUCTOR OVERLOADING

class Rental
{
private:
    double dailyRate;
    int days;
    double taxRate;

public:

    //  Constructor for one day
    Rental(double rate)
    {
        dailyRate = rate;
        days = 1;
        taxRate = 0;
    }

    //  Constructor for multiple days
    Rental(double rate, int d)
    {
        dailyRate = rate;
        days = d;
        taxRate = 0;
    }

    //  Constructor for multiple days with tax
    Rental(double rate, int d, double tax)
    {
        dailyRate = rate;
        days = d;
        taxRate = tax;
    }

    // Function to calculate total cost
    double calculateCost()
    {
        double total = dailyRate * days;
        double taxAmount = total * taxRate / 100;
        return total + taxAmount;
    }
};

int main()
{
    // Object 1 → One day rental
    Rental r1(1000);
    cout << "One day cost: " << r1.calculateCost() << endl;

    // Object 2 → Multiple days
    Rental r2(1000, 5);
    cout << "5 days cost: " << r2.calculateCost() << endl;

    // Object 3 → Multiple days with tax
    Rental r3(1000, 5, 18);
    cout << "5 days cost with tax: " << r3.calculateCost() << endl;

    return 0;
}

   