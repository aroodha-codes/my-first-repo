//seasons based on month
#include<stdio.h>
int main(){
    int m;
    printf("Enter month number:\n");
    scanf("%d",&m);
    switch(m){
        case 1:case 2:case 12:
            printf("Winter\n");
            break;
            case 3:case 4:case 5:
            printf("Summer\n");
            break;
            case 6:case 7:case 8:case 9:
            printf("Rainy\n");
            break;
            case 10:case 11:
            printf("Spring\n");
            break;
            default:
                printf("Invalid month number\n");
    }
    return 0;
}