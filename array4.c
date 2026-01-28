//using 2d array print the tables of 2 and 3
#include <stdio.h>
int main() {
    int tables[2][10];
    for(int i = 0; i < 10; i++) {
        tables[0][i] = 2 * (i+1);
        tables[1][i] = 3 * (i+1);
    }
    printf("Table of 2 and 3:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t%d\n",tables[0][i],tables[1][i]);
    }
    return 0;
}
