/*#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=10;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n=12345;
    int p = n%10;      //prints last digit
    printf("%d\n",p);
    int q = n/10;      // removes last digit
    printf("%d\n",q);
    return 0;
}*/
#include<stdio.h>
int main(){
    int n=12345,reverse=0;
    for( ;n>0;n = n/10){
    reverse = reverse * 10 + n%10;
    }
    printf("%d ",reverse);
    return 0;
}