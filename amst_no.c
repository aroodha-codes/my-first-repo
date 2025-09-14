// Check whether the given number is an Armstrong number or not
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, rem, result = 0;
    printf("Enter the value:\n");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        rem = n % 10;
        result += pow(rem,3);
        n /= 10;
    }
    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }
    return 0;
}