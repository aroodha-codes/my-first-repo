#include<stdio.h>
#include<string.h>
struct Student {
    int rollno;
    float cgpa;
    char name[10];
};
int main (){
    struct Student ade[3];
    ade[0].rollno = 107;
    ade[0].cgpa = 7.5;
    strcpy(ade[0].name, "Jhon Wick");
    printf("%d\n%.2f\n%s\n", ade[0].rollno, ade[0].cgpa, ade[0].name);
}