#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selection(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
}
}
int main(){
    int n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int arr[100000];
    srand(time(NULL));
    printf("Array generated:\n");
    for(int i=0;i<n;i++){
        arr[i] = rand()%1000;
        printf("%d ",arr[i]);
    }
    clock_t start = clock();
    selection(arr,n);
    clock_t end = clock();
    printf("\nSorted Array:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    double total=(double)(end-start)*1000.0/CLOCKS_PER_SEC;
    printf("Total time taken:%.2f ms",total);
    return 0;
}