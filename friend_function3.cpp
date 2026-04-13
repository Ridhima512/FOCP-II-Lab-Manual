#include <iostream>
using namespace std;
class B; // forward declration
class A{
    private :
    int x;
    public :
    A(){x = 10;}
    friend void sum(A,B);
};
 class B{
    private :
    int y;
    public :
    B(){y = 20;}
    friend void sum(A,B);
 };
 void sum(A a, B b){
    cout << "sum :"<< a.x + b.y;
 }

 int main(){
    
 }