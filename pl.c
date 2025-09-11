/*#include<stdio.h>
int main(){
    int a,b;
    printf("Enter  A and B:\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("A is greater\n");
    }
    else{
        printf("B is greater\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n >= 0){
        printf("positive\n");
    }
    else{
        printf("Negative\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A,B,C:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a >b && a>c){
        printf("A is greater\n");
    }
    else if(b > c){
        printf("B is greater\n");
    }
    else{
        printf("C is greater\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int marks;
    printf("Enter the Marks:\n");
    scanf("%d",&marks);
    if(marks > 90){
        printf("Grade A\n");
    }
    else if(marks<=90 && marks >70){
        printf("Grade B\n");
    }
    else if(marks <= 70 && marks > 50){
        printf("Grade C\n");
    }
    else{
        printf("Average\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int age;
    float weight;
    printf("Enter the age:\n");
    scanf("%d",&age);
    printf("Enter the weight:\n");
    scanf("%f",&weight);
    if(age >=18 && weight >= 50){
        printf("eligible to donate blood");
    }
    else if(age <18 || weight > 50){
        printf("Not eligible (under age)");
    }
    else if(age > 18 || weight < 50){
        printf("Not eligible(under weight)");
    }
    else{
        printf("Not eligible\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);
    if(number > 0){
        if(number%2==0){
            printf("Number is Positive and even\n");
        }
        else{
            printf("Number is positive and odd\n");
        }
    }
    else{
        printf("Number is negative\n");
    }
    return 0;
}*/
/*write a program to calculate upto 2 decimal nmbers based on number of units consumed
below 100 1 unit=1.5
below 200 1 unit=2.0
below 300 1 unit = 2.5
below 400 1 unit =3.0
above 400 1 unit= 4.0*/
/*#include<stdio.h>
int main(){
    float unit;
    printf("Enter units:\n");
    scanf("%f",&unit);
    if(unit <=100){
        float u=unit*1.5;
        printf("the bill is:%.2f\n",u);
    }
    else if(unit >100 && unit<=200){
        float u=unit*2.0;
        printf("the bill is:%.2f\n",u);
    }
     else if(unit >200 && unit<=300){
        float u=unit*2.5;
        printf("the bill is:%.2f\n",u);
    }
     else if(unit >300 && unit<=400){
        float u=unit*3.0;
        printf("the bill is:%.2f\n",u);
    }
    else{
        float u=unit*4.0;
        printf("the bill is:%.2f\n",u);
    }
    return 0;
}*/
/*print days of week*/
/*#include<stdio.h>
int main(){
    int m;
    printf("Enter month number:\n");
    scanf("%d",&m);
    switch(m){
        case 1:
            printf("January and has 31 days\n");
            break;
            case 2:
            printf("Feburary and has 28 days\n");
            break;
            case 3:
            printf("March and has 31 days\n");
            break;
            case 4:
            printf("April and has 30 days\n");
            break;
            case 5:
            printf("May and has 31 days\n");
            break;
            case 6:
            printf("juneand has 30 days\n");
            case 7:
            printf("July and has 31 days\n");
            break;
            case 8:
            printf("August and has 30 days\n");
            break;
            case 9:
            printf("September and has 31 days\n");
            break;
            case 10:
            printf("Octoberand has 30 days\n");
            break;
            case 11:
            printf("November and has 31 days\n");
            break;
            case 12:
            printf("December and has 30 days\n");
            break;
    }
    return 0;
}*/
//calculator
/*#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter A and B:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operator:\n");
    scanf(" %c",&op);
    switch(op){
        case '+':
            printf("A+B=%d\n",a+b);
            break;
            case '-':
            printf("A-B=%d\n",a-b);
            break;
            case '*':
            printf("A*B=%d\n",a*b);
            break;
            case '/':
            printf("A/B=%d\n",a/b);
            break;
            case '%':
            printf("A mod B=%d\n",a%b);
            break;
            default:
                printf("Invalid operator\n");
    }
    return 0;
}*/
//vowel or constant
/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    switch(ch){
        case 'a' :case 'A':case 'e':case 'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
            printf("Vowel\n");
            break;
            default:
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
                printf("Consonant\n");
            }
            else{
                printf("Not an alphabet\n");
            }
}
return 0;
}*/
//seasons based on month
/*#include<stdio.h>
int main(){
    int m;
    printf("Enter month number:\n");
    scanf("%d",&m);
    switch(m){
        case 1:case 2:case 12:
            printf("Winter\n");
            break;
            case 3:case 4:case 5:
            printf("Summer\n");
            break;
            case 6:case 7:case 8:case 9:
            printf("Rainy\n");
            break;
            case 10:case 11:
            printf("Spring\n");
            break;
            default:
                printf("Invalid month number\n");
    }
    return 0;
}*/
//upper case or lower case
/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("Lower case\n");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Upper case\n");
    }
    else{
        printf("Not an alphabet\n");
    }
    return 0;
}*/
//input age and gender and print the person is adult male or female or minor male or minor female
/*#include<stdio.h>
int main(){
    int age;
    char ch;
    printf("Enter the age:\n");
    scanf("%d",&age);
    printf("Enter the Gender(M/F):\n");
    scanf(" %c",&ch);
    if(ch=='M' || ch=='m'){
        if(age>=18){
            printf("Adult Male\n");
        }
        else{
            printf("Minor Male\n");
        }
    }
    else if(ch=='F' || ch=='f'){
        if(age>=18){
            printf("Adult Female\n");
        }
        else{
            printf("Minor Female\n");
        }
    }
return 0;
}*/
// Check whether the given number is an Armstrong number or not
/*#include <stdio.h>
#include <math.h>
int main() {
    int n, original, rem, result = 0;
    printf("Enter the value:\n");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        rem = n % 10;
        result += pow(rem,3);
        n /= 10;
    }
    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }
    return 0;
}*/
//entered year is leap year or not
/*#include<stdio.h>
int main(){
    int year;
    printf("Enter year;\n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("Leap year");
    }else{
        printf("Not leap year");
    }
    return 0;
}*/
//create a menu to calculate area of circle,square,rectangle,triangle
/*#include<stdio.h>
int main(){
    float a,b,area;
    int choice;
    printf("Menu(Area of):\n1.Circle\n2.Square\n3.Rectangle\n4.Triangle\nEnter Choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter radius:");
            scanf("%f", &a);
            area = 3.14 * a * a;
            printf("Area = %.2f\n", area);
            break;
        case 2:
            printf("Enter side: ");
            scanf("%f", &a);
            area = a * a;
            printf("Area = %.2f\n", area);
            break;
        case 3:
            printf("Enter length and breadth: ");
            scanf("%f%f",&a,&b);
            area = a*b;
            printf("Area = %.2f\n",area);
            break;
        case 4:
            printf("Enter the base and height: ");
            scanf("%f%f",&a,&b);
            area = 0.5 *a * b;
            printf("Area = %.2f\n",area);
            break;
            default:
            printf("Enter valid choice!");
    }
return 0;
}*/
// create atm machine that includes balance,withdrawl,deposit,exit
/*#include<stdio.h>
int main(){
    float withdrawl,deposit,total=50000;
    int ch;
    printf("Menu(ATM Machine):\n1.Balance\n2.Withdrawl\n3.Deposit\n4.Exit\nEnter choice:\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("The balance remaining is: %.2f",total);
            break;
        case 2:
            printf("Enter the withdrawl Amount:");
            scanf("%f",&withdrawl);
            if(withdrawl < total){
                printf("amount Withdrawn\n");
                printf("Remaining amount is %.2f",total - withdrawl);
            }else{
                printf("Insufficient Amount!");
            }
            break;
        case 3:
            printf("enter deposit amount: \n");
            scanf("%f",&deposit);
            if(deposit > 15000){
                printf("Enter valid amount!\n");
            }
            else{
                printf("Amount deposited\n");
            }
            printf("Remaining Amount:%.2f",total + deposit);
            break;
        case 4:
            printf("Exiting....");
            break;
    }
    return 0;
}*/

