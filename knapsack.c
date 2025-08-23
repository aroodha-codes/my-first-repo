#include<stdio.h>
#include<stdlib.h>
#define MAX_ITEMS 50
#define max(a,b)((a>b)?a:b)
void knapsack(int n,int m,int w[],int p[]){
    int v[MAX_ITEMS+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                v[i][j]=0;
            }else if(j < w[i-1]){
                v[i][j]=v[i-1][j];
            }else{
                v[i][j]=max(v[i-1][j],v[i-1][j-w[i-1]]+p[i-1]);
            }
        }
    }
    printf("Solution matrix:\n");
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            printf("%d\t",v[i][j]);
        }
        printf("\n");
    }
    printf("soultion:%d",v[n][m]);
}
int main(){
    int n,m,w[MAX_ITEMS],p[MAX_ITEMS];
    printf("Enter the number of items:\n");
    scanf("%d",&n);
    printf("Enter the capacity:\n");
    scanf("%d",&m);
    printf("Enter weight:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    printf("Enter profit:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    knapsack(n,m,w,p);
    return 0;
}