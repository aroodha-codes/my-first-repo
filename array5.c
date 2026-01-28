#include <stdio.h>
int main() {
    int arr[6]={1,2,3,4};
    printf("Enter elements:\n");
    scanf("%d%d",&arr[4],&arr[5]);
    printf("The elements are:\n");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
return 0;
}