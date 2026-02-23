#include <iostream>
using namespace std;

class person {
    private :
    string name;
    int age;
    public :
    person(string n, int a){ // constructor , parameterized constructor
        name = n;
        age = a;
        cout << "constructor called for "<< name << endl;
    }
    void display(){
        cout << "Name :"<<name<< "Age :"<<age<<endl;
    }
};
// Global object
person globalperson("Global user", 40);
int main(){
    cout << "inside main function\n";

    person localperson("john", 20); // total object
    localperson.display();

    return 0;
}

// local - created it inside the particular function
// global - created it outside any function

// using constructor print area of triangle

class Triangle {
private:
    float base, height;

public:
    // Constructor
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void calculateArea() {
        float area = 0.5 * base * height;
        cout << "Area of Triangle = " << area << endl;
    }
};

int main() {
    float b, h;
    cout << "Enter base of triangle: ";
    cin >> b;
    cout << "Enter height of triangle: ";
    cin >> h;

    // Object created using constructor
    Triangle t(b, h);

    t.calculateArea();

    return 0;
}
