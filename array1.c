//write a program to print marks of three subjects using arrays marks should be entered by user
#include <stdio.h>
int main() {
    int marks[3];
    printf("Enter marks for 1st subject: ");
        scanf("%d", &marks[0]);
    printf("Enter marks for 1st subject: ");
        scanf("%d", &marks[1]);
    printf("Enter marks for 1st subject: ");
        scanf("%d", &marks[2]);
printf(" Marks entered are:\n%d\n%d\n%d",marks[0],marks[1],marks[2]);
    return 0;
}
