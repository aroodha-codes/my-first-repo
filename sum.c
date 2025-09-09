#include<stdio.h>
int main(){
    int n=123456;
    int first=n%10;
    while(n>10){
        n=n/10;
    }
    int last=n;
    printf("Sum is:%d\n",first+last);
    return 0;
}