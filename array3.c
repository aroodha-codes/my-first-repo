#include<stdio.h>
int main() {
    int num[5]; // Array to store 5 numbers
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    printf("The numbers you entered are:");
    for(int i = 0; i < 5; i++) {
        printf(" %d", num[i]);
    }
    return 0;
}
