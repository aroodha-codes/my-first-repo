// pointer example
#include <stdio.h>
void examp(int *a){
    *a = 10;
}
int main(){
    int a = 5;
    examp(&a);
    printf("%d\n", a);
    return 0;
}