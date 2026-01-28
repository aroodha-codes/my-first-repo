#include<stdio.h>
#include<string.h>
struct Student {
    int rollno;
    float cgpa;
    char name[10];
};
int main(){
    struct Student s1={1, 8.2, "Sam"};
    struct Student s2={2, 9.1, "Kate"};
    printf("%d\n%.2f\n%s\n", s1.rollno, s1.cgpa, s1.name);
    printf("%d\n%.2f\n%s\n", s2.rollno, s2.cgpa, s2.name);
    struct Student *ptr = &s1;
    printf("%.2f\n", ptr->cgpa);
    printf("%d\n", (*ptr).rollno);
    return 0;
}