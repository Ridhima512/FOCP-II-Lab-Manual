#include <iostream>
using namespace std;

class BankAccount{

    private :
    string AccountHolderName;
    double Balance;
    int RewardPoints;

    public :
    // parameterized constructor 
    BankAccount(string name, double initialbalance, int points){
    AccountHolderName = name;
    Balance = initialbalance;
    RewardPoints = points;
    }
    
    // withdraw function
    void withdraw(){
        Balance -= 500; // deduct 500 units
        RewardPoints -= 20; // deduct 20 reward points

    }

    // Display function
    void displayAccount(){
        cout << "Account Holder Name :" << AccountHolderName << endl;
        cout << "Balance :" << Balance << endl;
        cout << "RewardPoints :" << RewardPoints << endl;

    }
};
    int main(){
        BankAccount Account("Ridhima", 5000, 100);
        cout << "Before withdraw"<< endl;
        Account.displayAccount();
        Account.withdraw();
        cout << "After withdraw" << endl;
        Account.displayAccount();

        return 0;


    }
      
    void increment(int &num) // pass by refrence
    {
        num = num +1;
    }
    int main()
    {
        int x = 5;
        cout << "Before function call :"<< x<< endl;
        increment(x);
        cout << "After function call :"<< x<< endl;

        return 0;
    }


    int main()
    {
        int x = 10;
        int *ptr;
        ptr = &x; // storing address of x
        cout << "Value of x :"<< x << endl;
        cout << "Address of x :"<< &x << endl;
        cout << "value stored in ptr (address):" << ptr << endl;
        cout << "Value at that address :"<< *ptr << endl;
        return 0;
    }


// BITWISE OPERATOR

    int main(){
        int a = 6; // 110 in binary
        int b = 4; // 100 in binary

        int result = a & b; 
        cout << "a & b =" << (a&b) << endl;

        return 0;
    }



    void test()
    {
        int a = 10, b = 20;
        cout << a && b;

    }

    int main()
        {
            test();
            return 0;
        }
    
    
