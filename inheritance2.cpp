#include <iostream>
using namespace std;

/*
class Base // parent class
{
public :
void show(){
    cout << "base class function"<<endl;
}
};
class Derived : public Base{
    public :
    void display(){
        cout << "derived class function"<< endl;
    }
};
int main(){
    Base b;
    b.show();
    Derived d;
    d.show();
    d.display();
    return 0;
} // no output for this code.

*/
/*

// single level inheritance
class A{
    public:
    void showA(){
        cout << "class A\n";
    }
};

// hybrid level inheritance
class B : public A{ // B is child of A
public :
void showB(){
    cout << "class B\n";
}
};

class C {
    public :
    void showC(){
        cout << "class C\n";
    }
};

class D : public B, public C {
    public :
    void showD(){
        cout << "class D\n";
    }
};
int main(){
    D obj;
    obj.show();
}
*/

class Base{
    public :
    Base(int x){
        cout << "base class parameterized constructor:"<< x<< endl;
    }
};

class Derived : public Base{
    public :
    Derived(int a): Base(a){
        cout << "derived class constructor:"<< a<< endl;
    }
};

int main(){
    Derived d(10);
    return 0;
}

