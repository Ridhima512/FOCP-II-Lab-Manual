#include<iostream>
#include<cmath>
using namespace std;

int main(){

// Q1).
/*
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


int N;
    cout << "Enter value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Buzz Fuzz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Buzz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Fuzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }

*/
// Q9).


    char alpha;
        cout<<"enter a alphabet :";
        cin >> alpha;

    if(alpha == 'A' || alpha == 'a' || alpha == 'E' || alpha == 'e' || alpha == 'I' || alpha == 'i' || alpha == 'O' || alpha == 'o' || alpha == 'U' || alpha == 'u'){
        cout << "alpha is vowel";
    }
    else{
        cout << "alpha is consonant";
    }


// Q10).


    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap Year";
    } 
    else {
        cout << "Not a Leap Year";
    }


// Q11).

    int items;
    float price, total, discount = 0;

    cout << "Enter number of items: ";
    cin >> items;

    cout << "Enter price per item: ";
    cin >> price;

    total = items * price;

    // Apply 10% discount if items > 1000
    if (items > 1000) {
        discount = total * 0.10;
        total = total - discount;
    }

    cout << "Total expense after discount: " << total << endl;


// Q12).


int s1, s2, s3;
cout << "enter sides of triangle :";
cin >> s1>> s2>> s3;

if(s1 == s2 ||s2 == s3 || s3 == s1){
    cout << "triangle is equilateral";
}
else if((s1 == s2 && s2 != s3)||(s2 == s3 && s1 != s2)||(s1 == s3 && s1 != s2)){
    cout << "triangle is isosceles";
}
else {
    cout << "triangle is scalene";
}



// Q13).


float a, b, c;
float D, root1, root2;

cout << "enter coeffecient of a, b & c :";
cin >> a >> b>> c ;

D = b*b - 4*a*c;
if(D>0){
    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b - sqrt(D)) / (2*a);
    cout << "roots are real and differ"<<endl;
    cout << "root 1 :" << root1 << endl;
    cout << "root 2 :" << root2 << endl;
}
else if(D == 0){
    root1 = -b / (2*a);
    cout << "roots are real and equal"<<endl;
    cout << "root :" << root1 << endl;
}
else{
    cout << "roots are imaginery (no real roots)"<<endl;
}


// Q14).


int choice;
    float a, b;

    do {
        cout << "\n----- MENU DRIVEN CALCULATOR -----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;

            case 5:
                cout << "Exiting calculator. Bye 👋" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);
     

// Q15).



// ARRAYS


// Q26).

int arr[5];
int total=0;
float percentage;

// input marks
cout << "enter marks of student :\n";
for(int i=0; i<5; i++){
    cin >> arr[i];
    total += arr[i];
}

// calculate percentage
percentage = (total/ 500.0)*100;

// output results
cout << "\nTotal marks :"<< total;
cout << "\nPercentage :"<< percentage<<"%";


// Q27).





// Q31).

int arr1[5];

cout << "enter 5 values :";
for(int i =0; i<5; i++){
    cin >> arr1[i];
}
     if(arr1[5] % 3 == 0 && arr1[5] % 5 == 0)
         cout << "divisible by both 3 and 5";
    else
        cout << "not divisible by both 3 and 5";


    return 0;
}