#include<stdio.h>
int main(){
    int num=1221,palin=0;
    int g=num;
    while(num!=0){
        int rem=num%10;
        palin=(palin*10)+rem;
        printf("%d\n",palin);
        num=num/10;
    }
    if(g==palin){
        printf("Palindrome sequence.");
    }
    else{
        printf("non palindrome");
    }
    
    return 0;
}