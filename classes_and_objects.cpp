#include <iostream>
using namespace std;

class student {
    private :
        int marks; // private : only accessible inside the class
    
    protected :
        int rollnumber; // protected : accessible inside class (and derived classes)

    public :
        string name; // public : accessible everywhere
        
    // setter for private and protected data
    void setData(int m, int r) {
        marks = m;
        rollnumber = r;
    }
    // getter for private data
    int getmarks(){
        return marks;
    }

    // function to show protected data
    void showrollnumber(){
        cout << "roll number :" << rollnumber << endl;
    }
};

int main() {

    // object creation
    student s1;

    // accessing pubic member
    s1.name = "Alice";

    // setting private & protected values
    s1.setData(90, 101);

    cout << "name :" << s1.name << endl;
    cout << "marks :" << s1.getmarks() << endl;

    // accessing protected data using public function
    s1.showrollnumber();

    // these would cause ERROR if uncommented:
    // s1.marks = 90;          ~ not private
    // s1.rollnumber = 101;    ~ not protected

    return 0;
}


// using classes and objects print area of triangle




