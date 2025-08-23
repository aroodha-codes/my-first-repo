#include<stdio.h>
int main(void){
    int temp,a=79,b=97;
    printf("Entered values:%d and %d\n",a,b);
    temp=a;a=b;b=temp;
    printf("Swapped values:%d and %d\n",a,b);
return 0;
}