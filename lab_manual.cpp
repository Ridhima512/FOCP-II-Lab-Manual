#include<iostream>
using namespace std;

int main(){

// Q1).

    //declare variable to store three numbers
    float num1, num2, num3;
    
    //ask the user to enter three numbers 
    cout<<"enter three numbers :";
    cin>>num1>>num2>>num3;

    //calculate the average
    float average = (num1 + num2 + num3)/3.0;

    //display the result
    cout<<"the average of the three marks is :"<<average<<endl;

// Q2).

    float radius, area;

    // ask user for input
    cout<<"enter the radius :";
    cin>>radius;

    //calculate area of circle : area = pi*r*r
    area = 3.14*radius*radius;

    //print the result
    cout<<"area of the circle:"<<area<<endl;

// Q3).

    int choice;
    float temp, converted;

    cout<<"temperature converter\n";
    cout<<"1. Fahrenheit to celsius\n";
    cout<<"2. Celsius to fahrenheit\n";
    cout<<"enter your choice(1 or 2):";
    cin>>choice;

    if(choice == 1){
        cout<<"enter temperature in fahrenheit:";
        cin>>temp;
        
        // converting fahrenheit to celsius 
        converted = (temp - 32.0f)*5.0f/9.0f;
        cout<<temp<<"degree f is"<<converted<<"degree c"<<endl;
    }

    else if(choice == 2){
        cout<<"enter temperature in celsius:";
        cin>>temp;

        // converting celsius to fahrenheit
        converted = (temp*9.0f/5.0f) + 32.0f;
        cout<<temp<<"degree c is"<<converted<<"degree f"<<endl;
    }

    else{
        cout<<"invalid choice !\n";
    }

// Q4).

    int itemNo;
    int quantity;
    double unitprice;
    double finalbill;

    //input
    cout<<"enter item no:";
    cin>>itemNo;
    cout<<"enter quantity:";
    cin>>quantity;
    cout<<"enter unit price:";
    cin>>unitprice;

    //calculate total before discount
    double totalamount = quantity*unitprice;

    //calculate discount (20%)
    double discount = totalamount*0.20;

    //output
    cout<<"item no:"<<itemNo<<endl;
    cout<<"total bill before discount:"<<totalamount<<endl;
    cout<<"discount(20%):"<<discount<<endl;
    cout<<"total bill after discount:"<<finalbill<<endl;

// Q5).
 
    int a, b, temp;
    cout<<"enter two numbers:";
    cin>>a>>b;

    cout<<"\nbefore swapping:\na ="<<a<<"b ="<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"after swapping:\na ="<<a<<"b ="<<b<<endl;

// Q6).

    int n;
    float basic, bonus, net;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "\nEmployee " << i << endl;
        cout << "Enter basic salary: ";
        cin >> basic;

        bonus = 0.12 * basic;
        net = basic + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << net << endl;
    }

// Q7).

    float score1, score2, score3;

    cout << "enter scores of players :";
    cin >> score1 >> score2 >> score3;

    if(score1 > score2 && score1 > score3){
        cout << "player 1 is winner";
    }

    else if (score2 > score1 && score2 > score3){
        cout << "player 2 is winner";
    }

    else{
        cout << "player 3 is winner";
    }

// Q8).


    return 0;

}