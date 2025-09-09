#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    L[i]=arr[low+i];
    for(int j=0;j<n2;j++)
    R[j]=arr[mid+1+j];
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int low,int high){
    if(low < high){
    int mid = low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
}
int main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    srand(time(NULL));
    printf("\nArray Generated:\n");
    for(int i=0;i<n;i++){
        arr[i] = rand()%1000;
        printf("%d ",arr[i]);
    }
    clock_t start = clock();
    mergeSort(arr,0,n-1);
    clock_t end = clock();
    printf("\nSorted array:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    double total = (double)(end-start)*1000.0/CLOCKS_PER_SEC;
    printf("\nThe total time taken:%.2f ms\n",total);
    return 0;
}