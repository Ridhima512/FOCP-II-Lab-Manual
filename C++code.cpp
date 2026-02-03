#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    // This is a single line comment.
/*This is a 
multiline comment */
cout<<"Hello world";
cout<<"Enter number";
int pi = 3;
cin>>pi;
cout<<pi;
const double pi = 3.14;


// create a calculator to calculate the grades on behalf of marks obtained.

int marks;
cout<<"enter marks :";
cin>>marks;
if(marks<0 || marks>100){
printf("invalid marks");
return 0;}
switch(marks/10){
    case 10:
    case 9 :
        cout<<"grade : A+";
        break;
    case 8 :
        cout<<"grade : A";
        break;
    case 7 :
        cout<<"grade : B";
        break;
    case 6 :
        cout<<"grade : C";
        break;
    case 5 :
        cout<<"grade : D";
        break;
    default :
        cout<<"grade : fail";
}

// another way

int marks;
char grade;
cout<<"enter marks :";
cin>>marks;
cout<<"grade :%c\n";
cin>>grade;
switch(grade){
    case 'A' :
    cout<<"Remarks :Excellent\n";
    break;
    case 'B' :
    cout<<"Remarks :Very good\n";
    break;
    case 'C' :
    cout<<"Remarks :Good\n";
    break;
    case 'D' :
    cout<<"Remarks : need inprovement\n";
    break;
    case 'F' :
    cout<<"Remarks : fail\n";
    break;
    default :
    cout<<"invalid\n";
}

// create a program to write set of positive numbers by skipping negative numbers & then calculate sum of positive number.

double number, sum = 0;
cout<<"enter numbers to sum(enter 0 to stop):"<< endl;
while (true) {
    //same as while(true) in c
    cout<< "enter a number";
    cin>>number; // read a double
    if(number == 0){// break condition
        break;
    }
    if(number<0){//skip negative numbers
        cout<<"negative number skipped."<< endl;
    continue;
    }
    sum += number; //add positive numbers
}
cout<<"sum of positive numbers :"<<
sum << endl;
// endl = new line just like \n
return 0;
}