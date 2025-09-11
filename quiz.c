//design and implement a mini game in c that asks the user multiple choice questions and evaluates their performance
#include<stdio.h>
int main(){
    int score=0,answer;
    printf("Welcome to the Quiz Game!\n");
    printf("Question 1: What is the capital of India?\n1. Berlin\n2. New Delhi\n3. Paris\n4. Rome\n");
    scanf("%d",&answer);
    if(answer==2){
        score++;
    }
    printf("Question 2: Who is the CEO of Tesla?\n1. Jeff Bezos\n2. Elon Musk\n3. Bill Gates\n4. Mark Zuckerberg\n");
    scanf("%d",&answer);
    if(answer==2){
        score++;
    }
    printf("Question 3: What is the largest planet in our solar system?\n1. Earth\n2. Mars\n3. Jupiter\n4. Saturn\n");
    scanf("%d",&answer);
    if(answer==3){
        score++;
    }
    printf("Your total score is: %d out of 3\n",score);
    if(score==3){
        printf("Excellent!\n");
    }else if(score==2){
        printf("Good job!\n");
    }else if(score==1){
        printf("You can do better!\n");
    }else{
        printf("Better luck next time!\n");
    }
    return 0;
}