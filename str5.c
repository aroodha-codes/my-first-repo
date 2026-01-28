//store the home address of 3 people include house_no,block,city,state; 
#include<stdio.h>
#include<string.h>
struct Address {
    char house_no[10];
    char block[10];
    char city[20];
    char state[20];
};
int main(){
    struct Address add1={"13b","Blackwood","reevs","State1"};
    struct Address add2={"22a","Greenwood","smith","State2"};
    struct Address add3={"31c","Redwood","johnson","State3"};
    printf("%s, %s, %s, %s\n", add1.house_no, add1.block, add1.city, add1.state);
    printf("%s, %s, %s, %s\n", add2.house_no, add2.block, add2.city, add2.state);
    printf("%s, %s, %s, %s\n", add3.house_no, add3.block, add3.city, add3.state);
    return 0;
}