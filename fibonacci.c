#include <stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fib(n-1)+fib(n-2);
}
int main() {
    int n=10;
/*int a=0,b=1,c,i,n=10;
printf("%d\n",a);
for(i=1;i<n;i++){
printf("%d\n",b);
c=a+b;
a=b;
b=c;*/
//}
for(int i=0;i<n;i++){
    printf("%d\n",fib(i));
}
    return 0;
}
