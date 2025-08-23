#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
void findSubsets(int set[],int n,int d,int subset[],int size,int sum){
    if(sum==d){
        printf("The subset with sum %d found:\n",d);
        for(int i=0;i<size;i++){
            printf("%d  ",subset[i]);
        }
       printf("\n");
       return; 
    }
    if(n==0||sum > d)
    return;
    subset[size]=set[0];
    findSubsets(set+1,n-1,d,subset,size+1,sum+set[0]);
    findSubsets(set+1,n-1,d,subset,size,sum);
}
int main(){
    int n,d,set[MAX_SIZE];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&set[i]);
    printf("Enter the sum to be obtained:\n");
    scanf("%d",&d);
    int subset[MAX_SIZE] = {0};
    findSubsets(set,n,d,subset,0,0);
    return 0;
}
