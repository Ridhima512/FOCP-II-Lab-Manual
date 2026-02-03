#include <stdio.h>
#include <conio.h>
int main(){
// This is a single lprintf("enteine comment.
/*This is a 
multiline comment */
printf("Hello");
scanf("Enter a number");
int pi = 3;
printf("%d\n",pi);
int x = 3;
scanf("%d\n",&x);
const double pi = 3.14;
pi = 3.14 +5;
printf("%f",pi);


// create a calculator to calculate the grades on behalf of marks obtained.

int marks;
printf("enter marks :");
scanf("%d",&marks);
if(marks<0 || marks>100){
printf("invalid marks");
return 0;}
switch(marks/10){
    case 10:
    case 9 :
        printf("grade : A+");
        break;
    case 8 :
        printf("grade : A");
        break;
    case 7 :
        printf("grade : B");
        break;
    case 6 :
        printf("grade : C");
        break;
    case 5 :
        printf("grade : D");
        break;
    default :
        printf("grade : fail");
}

// another way 

int marks;
char grade;
printf("enter marks :");
scanf("%d",&marks);
printf("grade :%c\n", grade);
switch(grade){
    case 'A' :
    printf("Remarks :Excellent\n");
    break;
    case 'B' :
    printf("Remarks :Very good\n");
    break;
    case 'C' :
    printf("Remarks :Good\n");
    break;
    case 'D' :
    printf("Remarks : need inprovement\n");
    break;
    case 'F' :
    printf("Remarks : fail\n");
    break;
    default :
    printf("invalid\n");
}

// create a program to write set of positive numbers by skipping negative numbers & then calculate sum of positive number.

double number, sum = 0;
printf("enter numbers to sum(enter 0 to stop):\n");
while (1) {
    //same as while(true) in c
    scanf("%lf", &number); // read a double
    if(number == 0){// break condition
        break;
    }
    if(number<0){//skip negative numbers
        printf("negative number skipped.\n");
    continue;
    }
    sum += number; //add positive numbers
}
printf("sum of positive numbers : %.2lf\n", sum);


return 0;
}