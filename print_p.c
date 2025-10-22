#include<stdio.h>
int main(){
    int n=20,count,i,j;
for(i=1;i<=n;i++){
    count=0;
for(j=1;j<=i/2;j++){
    if (i%j==0){
    count++;
    }
}
if(count==1){
    printf("%d ",i);
}
}
 return 0;
}
