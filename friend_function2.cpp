#include <iostream>
using namespace std;
class Box{
    private :
    int length;
    public :
    Box(int l){
        length = l;
    }

    friend void compare(Box b1, Box b2);
};

void compare(Box b1, Box b2){
    if(b1.length > b2.length)
    cout << "Box1 is bigger";
    else 
    cout << "Box2 is bigger";
}

int main(){
    Box b1(10), b2(20);
}