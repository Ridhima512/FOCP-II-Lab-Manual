#include<iostream>
using namespace std;

int area(int x, int y)
{
    return x*y;
}
int main (){
    int length, width;
    cout << "provide length:";
    cin >> length;
    cout << "provide width:";
    cin >> width;
    int result = area(length, width);
    cout << "area of square =" << result;
    return 0;
}
    



    void swap(int &x, int &y)
    {
        cout << "x & y before swap:" << x << y;
        int temp = x;
        x = y;
        y = temp;
        cout << "x & y after swap:" << x << y;
    }
    int main(){
        int num1, num2;
        cout << "provide 2 values :"<< endl;
        cin >> num1 >> num2;
        cout << "values of num1 & num2 before function call:\n" <<num1 <<num2;
        swap(num1, num2);
        cout << "values of num1 & num2 after function call:\n" <<num1 <<num2;
        return 0;
    }
// & - refer (call by refrence) ; without using & infront of int x and int y is called call by value.m