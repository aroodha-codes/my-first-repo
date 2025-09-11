//create a menu to calculate area of circle,square,rectangle,triangle
#include<stdio.h>
int main(){
    float a,b,area;
    int choice;
    printf("Menu(Area of):\n1.Circle\n2.Square\n3.Rectangle\n4.Triangle\nEnter Choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter radius:");
            scanf("%f", &a);
            area = 3.14 * a * a;
            printf("Area = %.2f\n", area);
            break;
        case 2:
            printf("Enter side: ");
            scanf("%f", &a);
            area = a * a;
            printf("Area = %.2f\n", area);
            break;
        case 3:
            printf("Enter length and breadth: ");
            scanf("%f%f",&a,&b);
            area = a*b;
            printf("Area = %.2f\n",area);
            break;
        case 4:
            printf("Enter the base and height: ");
            scanf("%f%f",&a,&b);
            area = 0.5 *a * b;
            printf("Area = %.2f\n",area);
            break;
            default:
            printf("Enter valid choice!");
    }
return 0;
}