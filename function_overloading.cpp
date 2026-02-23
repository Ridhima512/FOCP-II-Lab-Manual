#include <iostream>
#include <cmath>
using namespace std;
class math {
    public :
    // function with two int parameters
    int add(int a, int b){
        return a + b;
    }

    // function with three int parameters
    int add(int a, int b, int c){
        return a + b+ c;
    }

    // function with two double parameters 
    double add(double a, double b){
        return a + b;
    }
};

int main(){
    math obj;

    cout << "sum of 2 & 3:"<<obj.add(2,3)<<endl;
    cout << "sum of 2, 3 & 4:"<<obj.add(2,3,4)<<endl;
    cout << "sum of 2, 5 & 3, 5:"<<obj.add(2.5, 3.5)<<endl;

    return 0;
}


// using function overloading print area of triangle


class Triangle {
public:
    // Function 1: Area using base and height
    float area(float base, float height) {
        return 0.5 * base * height;
    }

    // Function 2: Area using three sides (Heron's Formula)
    float area(float a, float b, float c) {
        float s = (a + b + c) / 2;   // semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Triangle t;
    int choice;

    cout << "1. Using Base and Height" << endl;
    cout << "2. Using Three Sides" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        float b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;

        cout << "Area of Triangle = " << t.area(b, h) << endl;
    }
    else if (choice == 2) {
        float a, b, c;
        cout << "Enter three sides: ";
        cin >> a >> b >> c;

        cout << "Area of Triangle = " << t.area(a, b, c) << endl;
    }
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}
