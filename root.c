#include<stdio.h>
#include<math.h>
int main(){
    float b,e,p;
    printf("Enter base:\n");
    scanf("%f",&b);
     printf("Enter expo:\n");
    scanf("%f",&e);
    p=pow(b, +e);
    printf("answer  is:%.2f",p);
return 0;
}