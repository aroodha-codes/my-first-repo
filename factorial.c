/*#include<stdio.h>
int main(){
int fact=1;
for(int i=5;i>=1;i--){
fact=fact*i;
}
printf("%d",fact);
return 0;
}*/
//even numbers b/w 1 to 50
#include<stdio.h>
int main(){
    for(int i=0;i<=50;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}