#include<stdio.h>
int main(){
int n=4;
int fact=1;
for(int i=n;i>=2;i--){
fact=fact*i;
}
printf("%d",fact);
return 0;
}
