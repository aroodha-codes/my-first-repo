#include<stdio.h>
int main(){
    int n=5146;
    int product=1;
  while(n!=0){
    int last=n%10;
    product=product*last;
    n=n/10;
  }
printf("Product is:%d\n",product);
    return 0;
}