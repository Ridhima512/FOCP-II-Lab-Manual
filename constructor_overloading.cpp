#include <iostream>
#include <cmath>
using namespace std;

// using constructor overloading print area of triangle

class Triangle {
private:
    float area;

public:
    // Constructor 1: Using base and height
    Triangle(float base, float height) {
        area = 0.5 * base * height;
    }

    // Constructor 2: Using three sides (Heron's Formula)
    Triangle(float a, float b, float c) {
        float s = (a + b + c) / 2;   // semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void display() {
        cout << "Area of Triangle = " << area << endl;
    }
};

int main() {
    int choice;

    cout << "1. Using Base and Height" << endl;
    cout << "2. Using Three Sides (Heron's Formula)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        float b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;

        Triangle t(b, h);   // calls first constructor
        t.display();
    }
    else if (choice == 2) {
        float a, b, c;
        cout << "Enter three sides: ";
        cin >> a >> b >> c;

        Triangle t(a, b, c);  // calls second constructor
        t.display();
    }
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}
