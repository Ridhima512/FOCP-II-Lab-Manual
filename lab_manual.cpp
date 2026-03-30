#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
/*
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
                cout << "Exiting calculator. Bye " << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);   
     

// Q15).


    int n, num, largest;

    cout << "Enter number of sales entries: ";
    cin >> n;

    cout << "Enter the numbers: ";
    cin >> largest;  // assume first number as largest

    for(int i = 2; i <= n; i++)
    {
        cin >> num;

        if(num > largest)
        {
            largest = num;
        }
    }

    cout << "Largest sales figure is: " << largest;

    return 0;

*/


                                        // ************** ARRAYS *************** //




// Q26).
/*
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

*/
// Q27).
/*
int price[10];
int max;

// input prices 
cout << "enter prices of 10 items :\n";
for(int i =0; i<10; i++){
    cin >> price[i];
}

// assume first element is maximum
max = price[0];

// find maximum price 
for(int i =1; i<10; i++){
    if(price[i]> max){
        max = price[i];
    }
}

// display result
cout << "maximum price is :"<< max;

*/

// Q28).
/*

int num[5];
int oddsum = 0, evensum = 0;

// input numbers
cout << "enter numbers :\n";
for(int i=0; i<5; i++){
    cin>>num[i];
}

// check even or odd
for(int i=0; i<5; i++){
    if(num[i] % 2 == 0)
    {
        evensum = evensum + num[i];
    }
    else{
        oddsum = oddsum + num[i];
    }
}

// display result
cout << "sum of even numbers :"<< evensum << endl;
cout << "sum of odd numbers :"<< oddsum << endl;

*/

// Q29).
/*
int temp[30];
int min;

cout << " enter temp :\n";
// input temperature
for(int i=0; i <30; i++){
    cin >> temp[i];
}

// assume first temp is minimum
min = temp[0];

// for minimum temperature
for(int i=1; i<30; i++){
    if(temp[i] < min){
        min = temp[i];
    }
}

// display result 
cout <<" minimum temp is:"<< min;

*/

// Q30).
/*
int salary[10];
int total=0;
float average;

cout <<"enter salary:\n";

for(int i=0; i<10; i++){
    cin >> salary[i];

    total = total + salary[i];


average = (total/1000.0)*100.0 ;
}

// display result
cout << "total salary :"<<total<<endl;
cout << " average :"<<average<<endl;

*/


// Q31).

/*
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



*/

// Q32.
/*
int value[5];
int largest, Slargest;

cout <<"enter 5 stock values :\n";

for(int i =0; i<5; i++){
    cin >> value[i];
}

// assume 1st is largest or Slargest
largest = value[0];
Slargest = value[0];

for(int i=1; i<5; i++){
    if(value[i] > largest){
        Slargest = largest;
        largest = value[i];

    }
    else if(value[i] > Slargest && value[i] != largest){
        Slargest = value[i];
    }
}

cout << "largest :"<< largest<<endl;
cout << "Slargest :"<<Slargest<<endl;

*/



                                             // *************** 2D ARRAY *************** //

// int array[ROW][COLUMN]


// Q33).
/*
int marks[3][5];

cout << "enter marks of 3 students in 5 subjects :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
        cin >> marks[i][j];
    }
}

cout << "Marks in 2nd subject of 1st student: " << marks[0][1]<< endl;
cout << "Marks in 5th subject of 3rd student: " << marks[2][4]<< endl;


*/

// Q34).
/*
int mat[3][3];
int sum1 =0, sum2 =0;

cout << "enter values :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> mat[i][j];

        sum1 = sum1 + mat[i][j];
    }
}

int mat2[3][3];

cout<< "enter values for mat 2 :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> mat[i][j];

        sum2 = sum2 + mat[i][j];
    }
}

cout << "sum of matrix 1 :\n"<<sum1;
cout << "sum of matrix 2 :\n"<<sum2;

cout << sum1 + sum2;

*/

// Q35).
/*
int matrix[3][3];

cout << "enter values :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> matrix[i][j];
    }
}
cout << "\n ORIGINAL MATRIX :\n";

// display original matrix 

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout << matrix[i][j] <<" ";
    }
    cout << endl;
}
cout << "\n TRANSPOSE MATRIX :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout << matrix[j][i] << " ";
    }
    cout << endl;
}

*/

// Q36).
/*
int m, n, p, q;

cout << "enter no. of rows & columns for matrix 1 :";
cin >> m>>n;
cout << "enter no. of rows & columns for matrix 2 :";
cin >> p>>q;

if(n != p)
{ 
    cout << " matrix multiplication not possible";
}

int A[m][n], B[p][q], C[m][q];

cout << "enter elements for 1st matrix :\n";
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin >> A[i][j];
    }
}

cout << "enter elements for 2nd matrix :\n";
for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        cin >> B[i][j];
    }
}

// resulted matrix
for(int i=0;i<m;i++)
    {for(int j=0;j<q;j++)
        {C[i][j]=0;
        }
    }

for(int i=0; i<m; i++){
    for(int j=0; j<q; j++){
        for(int k=0; k<n; k++){
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}

cout<<"Result matrix:\n";

    for(int i=0;i<m;i++)
    {for(int j=0;j<q;j++)
        {cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

*/


                                          // ************** STRING **************** //


// Q37).
/*
string username;
bool valid = true;

cout << "enter username :\n";
cin >> username;

for(int i=0; i<username.length(); i++){
    if(!isalnum(username[i]))   //  isalnum checks if character is alphabet or number
    {
         valid = false;
            break;
    }
}

if(valid)
        cout << "Username is valid";
    else
        cout << "Username is invalid";

*/

/*

isalnum() = checks letter or digit
isalpha() = checks alphabet
isdigit() = checks number


*/

// Q39).
/*
 int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int value = 1;

        for(int j = 0; j <= i; j++)
        {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }
*/

// Q40).
/*
string str, cleaned = "";
    cout << "Enter a string: ";
    getline(cin, str);

    // Remove extra spaces
    bool space = false;
    for(char ch : str)
    {
        if(isspace(ch))
        {
            if(!space)
            {
                cleaned += ' ';
                space = true;
            }
        }
        else
        {
            cleaned += ch;
            space = false;
        }
    }
// Remove leading space
    if(cleaned[0] == ' ')
        cleaned.erase(0,1);

    // Remove trailing space
    if(cleaned[cleaned.length()-1] == ' ')
        cleaned.erase(cleaned.length()-1,1);

    // Convert to lowercase
    for(int i=0;i<cleaned.length();i++)
        cleaned[i] = tolower(cleaned[i]);

    // Sentence case
    cleaned[0] = toupper(cleaned[0]);

    int words = 0, digits = 0, special = 0;
    bool valid = true;

    for(int i=0;i<cleaned.length();i++)
    {if(isdigit(cleaned[i]))
            digits++;

        else if(!isalpha(cleaned[i]) && !isdigit(cleaned[i]) && !isspace(cleaned[i]))
        {
            special++;
            valid = false;
        }
    }

    // Count words
    words = 1;
    for(int i=0;i<cleaned.length();i++)
    {
        if(cleaned[i] == ' ')
            words++;}

    cout << "\nNormalized String: " << cleaned << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;

    if(valid)
        cout << "String is VALID (contains only alphabets, digits and spaces)" << endl;
    else
        cout << "String is INVALID (contains special characters)" << endl;

*/


/*

getline() = read full line input
isspace() = check spaces
isdigit() = check digits
isalpha() = check letters
tolower() = convert to lowercase
toupper() = convert to uppercase

*/





}  