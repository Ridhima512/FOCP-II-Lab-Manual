#include <iostream>
using namespace std;

// Q1.

class Student
{
private:
    string name;
    int marks;

public:
    // Constructor to initialize values
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    // Member function to display details
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Creating object and passing values
    Student s1("Ridhima", 95);

    // Displaying details
    s1.display();

    return 0;
}


// Q2.

class Car{
private :
string brand;
int price;

public :
Car(string b, int p){
    brand = b;
    price = p;
}

void DisplayCar(){
    cout << "car brand :"<< brand<<endl;
    cout << "car price :"<< price<<endl;
}
};

int main(){
    Car c1("BMW", 5000000);
    Car c2("TOYOTA", 2000000);

    c1.DisplayCar();
    c2.DisplayCar();
}
    

// Q3.

class rectangle{

private :
int length;
int breadth;

public :
rectangle(int l, int B){
    length = l;
    breadth = B;
}

void displayarea(){
    float area = length * breadth;
    cout <<"length :"<<length<<endl;
    cout <<"breadth :"<<breadth<<endl;
    cout <<"area of rectangle :"<<area<<endl;
}
};
int main(){
    rectangle r1(10,5);
    r1.displayarea();
}
    

// Q4.

class employee{
private :
float emp_id;
int salary;

public :
employee(float i, int s){
    emp_id = i;
    salary = s;
}

void displayinfo(){
    cout << "emp_id:"<<emp_id<<endl;
    cout << "salary:"<<salary<<endl;
}
};
int main(){
    employee e1(101, 50000);

    e1.displayinfo();
}
    

// Q5.

class bankaccount{
private :
int account_number;
float balance;

public :
bankaccount(int num, float bal){
    account_number = num;
    balance = bal;
}

void displaydetail(){
    cout << "account num:"<<account_number<<endl;
    cout << "balance:"<<balance<<endl;
}
};

int main(){
    bankaccount b1(304, 50000);

    b1.displaydetail();
}
    

// Q6.

class Book{
private :
string title;
int price;

public :
Book(string t, int p){
    title = t;
    price = p;
}

void displaybook(){
    cout <<"book title :"<<title<<endl;
    cout <<"price :"<<price<<endl;
}
};
int main(){
    Book b1("English", 400);
    Book b2("Computer", 350);
    Book b3("Maths", 400);

    b1.displaybook();
    b2.displaybook();
    b3.displaybook();
}
    

// Q7.

class table{
private :
string material;
int price;
int legs;

public :
// 1. Default constructor
table()
{
    material = "wood";
    price = 500;
    legs = 4;
}

// 2. constructor with material and price
table(string m, int p){
    material = m;
    price = p;
    legs = 4; // default
}

// 3. constructor with material , price and legs
table(string M, int P, int L){
    material = M;
    price = P;
    legs = L;
}

void displaytable(){
    cout <<"material:"<< material<< endl;
    cout << "price:"<< price <<endl;
    cout <<"no. of legs:"<<legs<<endl;
}
};
int main(){
    table t1; // default
    table t2("steel", 400);
    table t3("wood", 500, 4);

    t1.displaytable();
    t2.displaytable();
    t3.displaytable();
}
    

// Q8. # function overlaoding

// function for cube 
float volume(float side)
{
    return side * side * side;
}

// function for cuboid
float volume(float l, float b, float h)
{
    return l * b * h;
}

//function for cylinder
float volume(double r, double H)
{
    return 3.14 * r * r * H;
}

int main(){
    cout <<"volume of cube:"<< volume(3)<<endl;
    cout <<"volume of cuboid:"<<volume(3, 4, 5)<<endl;
    cout <<"volume of cylinder:"<<volume(7, 2)<<endl;
}
    

// Q9.

class electricitybill{
public :
// 1. only units 
void calculatebill(int units){
    float bill = units*5;
    cout << "bill (default rate):"<<bill<<endl;
}

// 2. units + rate
void calculatebill(int units , float rate){
    float bill = units * rate;
    cout <<"bill (custom rate):"<<bill<<endl;
}

// 3. units + rate + fix charge
void calculatebill(int units, float rate, float fixedcharge){
    float bill = (units * rate) + fixedcharge;
    cout <<"bill(with fixed charge):"<<bill<<endl;
}
};
int main(){
    electricitybill e;
    e.calculatebill(100);
    e.calculatebill(100, 6.5);
    e.calculatebill(100, 6.5, 50);
}


// Q10.

class product{
private:
string productname;
int price;
int quantity;

public:
product(string pname, int p, int q){
    productname = pname;
    price = p;
    quantity = q;
}

// function to calculate total cost
void totalcost(){
    float total = price * quantity;
    cout <<"productname :"<< productname<<endl;
    cout <<"total cost:"<<total <<endl;
}

// destructor
~product(){
    cout <<"product :"<<productname<<"removed from memory"<<endl;
}
};
int main(){
    product p1("laptop", 60000, 2);
    product p2("mouse", 500, 3);
    p1.totalcost();
    p2.totalcost();
}
    

// Q11.

class course {
private:
string cname;
string iname;
int duration;

public:
course(string c, string i, int d){
    cname = c;
    iname = i;
    duration = d;
}

void displayCdetail(){
    cout <<"course name:"<<cname<<endl;
    cout << "instructor name:"<<iname<<endl;
    cout <<"duration:"<<duration<<"weeks"<<endl;
}

// destructor
~course(){
    cout <<"course :"<<cname<<"course is deleted"<<endl;
}
};
int main(){
    course c1("c++", "Ridhima", 6);
    course c2("data science", "Lakshay", 5);

    c1.displayCdetail();
    c2.displayCdetail();
}
    

// Q12.

class Mobile
{
private:
    string brand;
    int price;
    int storage;

public:
    // 1. Only brand
    Mobile(string b)
    {
        brand = b;
        price = 0;
        storage = 0;
    }

    // 2. Brand + price
    Mobile(string b, int p)
    {
        brand = b;
        price = p;
        storage = 0;
    }

    // 3. Brand + price + storage
    Mobile(string b, int p, int s)
    {
        brand = b;
        price = p;
        storage = s;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }
};

int main()
{
    Mobile m1("Samsung");
    Mobile m2("Apple", 70000);
    Mobile m3("OnePlus", 50000, 128);

    m1.display();
    m2.display();
    m3.display();

}
    

// Q13.

class Laptop
{
private:
    string brand;
    int ram;
    int price;

public:
    // Function Overloading
    void setDetails(string b)
    {
        brand = b;
        ram = 0;
        price = 0;
    }

    void setDetails(string b, int r)
    {
        brand = b;
        ram = r;
        price = 0;
    }

    void setDetails(string b, int r, int p)
    {
        brand = b;
        ram = r;
        price = p;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Laptop l1, l2, l3;

    l1.setDetails("HP");
    l2.setDetails("Dell", 8);
    l3.setDetails("Lenovo", 16, 60000);

    l1.display();
    l2.display();
    l3.display();
}



// Q14.

class Vehicle
{
private:
    string vehicleNo;
    string ownerName;
    string type;
    int fee;

public:
    // Default Constructor
    Vehicle()
    {
        vehicleNo = "Not Assigned";
        ownerName = "Unknown";
        type = "General";
        fee = 0;
    }

    // 2-parameter constructor
    Vehicle(string v, string o)
    {
        vehicleNo = v;
        ownerName = o;
        type = "General";
        fee = 0;
    }

    // 4-parameter constructor
    Vehicle(string v, string o, string t, int f)
    {
        vehicleNo = v;
        ownerName = o;
        type = t;
        fee = f;
    }

    void displayVehicle()
    {
        cout << "Vehicle No: " << vehicleNo << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Type: " << type << endl;
        cout << "Fee: " << fee << endl;
    }
};

int main()
{
    Vehicle v1;  
    Vehicle v2("DL01AB1234", "Ridhima");  
    Vehicle v3("HR26XY5678", "Lakshay", "Private", 5000);  

    v1.displayVehicle();
    v2.displayVehicle();
    v3.displayVehicle();

}
    