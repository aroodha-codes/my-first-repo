//input age and gender and print the person is adult male or female or minor male or minor female
#include<stdio.h>
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
}