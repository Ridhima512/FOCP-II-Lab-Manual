#include <iostream>
using namespace std;

class Student{
    private :
        int marks; // non static

    public :
        Student(){
            marks = 85;
        }

    friend void show(Student s); // declared inside a class can acccess the private, protected and public. Define it outside the class.
};

void show(Student s){
    cout << "Marks :"<< s.marks << endl;
}

int main(){
    Student s1;
    show(s1);
}