#include <iostream>
using namespace std; // a space which is holding all the names.

// Base class (Parent class) // by which we are deriving something
class Animal {
    public :
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class (child class) also known as (derived class)
class Dog : public Animal {
    public :
    void bark(){
        cout << "dog is barking"<< endl;
    }
};

int main(){
    Dog d; // created object of child class and we are calling the function of parent class.

    d.eat(); // inherited from animal // eat is a public function
    d.bark(); // dog's own function

    return 0;
}



// scope resolution operator :

int x = 100;
int main () {
    int x = 50;


    cout << "local x  ="<< x<< endl;
    cout << "global x ="<<::x<<endl;

    return 0;

}
    
// abstraction - showing relevalent detailes and hiding irrelevant details.