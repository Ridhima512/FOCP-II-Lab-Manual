#include <iostream>
using namespace std;


    int add(int a, int b){
     return (a + b);
     }
    int sub(int a, int b){
        return (a - b);
    }
    int mul(int a, int b){
        return (a*b);
    }
    float divi(int a, int b){
        return (float)a / b;
    }

    int main(){
        int a, b, choice;
        cout <<"enter two numbers :";
        cin >> a >> b;

    cout << "\n choose operation: \n";
    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";
    cout << "enter your choice \n";
    cin >> choice;

    if(choice == 1){
        cout << "ADDITION =" << add(a,b);
    }
    else if(choice == 2){
        cout << "SUBTRACTION =" << sub(a,b);
    }
    else if(choice == 3){
        cout << "MULTIPLICATION =" << mul(a,b);
    }
    else{
        cout << "DIVISON =" << divi(a,b);
    }
}
    


