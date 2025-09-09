#include<stdio.h>
int main(void){
    int i,j,n=10,count;
    for(i=2;i<=n;i++){
        if(n%i==0){
            count=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0){
            printf("%d\n",i);
            }
        }
    }
    return 0;
}