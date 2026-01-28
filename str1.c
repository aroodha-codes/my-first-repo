#include<stdio.h>
#include<string.h>
struct Student {
    int rollno;
    float cgpa;
    char name[10];
};
int main(){
    struct Student s1;
    s1.rollno = 777;
    s1.cgpa = 9.5;
    strcpy(s1.name, "James Bond");
    printf("Roll No: %d\n", s1.rollno);
    printf("CGPA: %.2f\n", s1.cgpa);
    printf("Name: %s\n", s1.name);
    return 0;
}