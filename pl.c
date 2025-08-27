#include<stdio.h>
int main(){
    char letter;
printf("Enter letter:");
scanf("%c",&letter);
(letter =='a'||letter=='e'||letter=='i'||letter == 'o'|| letter == 'u'||letter =='A'||letter=='E'||letter=='I'||letter == 'O'|| letter == 'U')?printf("vowles"):printf("consonants");
return 0;
}