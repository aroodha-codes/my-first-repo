//write a function percentage of three subjects and to print the result
#include <stdio.h>
float calculate_percentage(float subject1, float subject2, float subject3) {
    float total = subject1 + subject2 + subject3;
    float percentage = (total / 300) * 100;
    return percentage;
}
int main() {
    float subject1, subject2, subject3, percentage;
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &subject1, &subject2, &subject3);
    percentage = calculate_percentage(subject1, subject2, subject3);
    printf("The percentage is: %.2f%%\n", percentage);
    return 0;
}
