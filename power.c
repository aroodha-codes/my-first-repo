#include<stdio.h>
int main(){
    int expo=3,power=1,base=3;
    for(int i=1;i<=expo;++i){
        power=power*base;
    }
    printf("%d\n",power);
    return 0;
}