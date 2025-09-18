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