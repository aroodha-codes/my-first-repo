#include<stdio.h>
#include<string.h>
int main(){
    
    char first[20]="hello";
    char second[20]="World";
    strcat(first,second);
    printf("%s\n",first);
    printf("%s\n",second);
    return 0;
}