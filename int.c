#include<stdio.h>
int main(){
    int a,b;
    float A,B;
    printf("enter integer number:\n");
    scanf("%d%d",&a,&b);
    printf("enter float number:\n");
    scanf("%f%f",&A,&B);
    int sum=a+b;
    float s=A+B;
    printf("integer sum is:%d\n",sum);
    printf("\nfloat sum is is:%.2f\n",s);
    return 0;
} 
