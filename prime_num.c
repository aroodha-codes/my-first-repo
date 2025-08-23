#include<stdio.h>
int a;
int main(){
    int i,count;
    printf("Enter a number:");
    scanf("%d",&a);
    count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
       count++;
       }
    }
if(count==2){
    printf("prime number\n");
}
else{
    printf("Not prime number\n");
}
return 0;
 }