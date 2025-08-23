#include<stdio.h>
int main(){
    int a=7,b=10,c=9;
    if(a>b && a>c){
        printf("A is greater");
    }
    if(b>c && b>a){
        printf("B  is greater");
    }else{
        printf("C is greater");
    }
    return 0;
}