#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define INF 999
int prims(int a[MAX][MAX],int n,int source){
    int s[MAX]={0};
    int d[MAX];
    int u,v,min,sum=0;
    for(int i=0;i<n;i++){
        d[i]=a[source][i];
    }
    s[source]=1;
    for(int i=0;i<n-1;i++){
        min=INF;
        for(int j=0;j<n;j++){
            if(s[j]==0 && d[j] < min){
                min= d[j];
                u = j;
            }
        }
        s[u]=1;
        sum += d[u];
        for(v=0;v<n;v++){
            if(s[v]==0 && d[v] > a[u][v]){
                d[v]=a[u][v];
            }
        }
    }
    return sum;
}
int main(){
    int n,a[MAX][MAX],source;
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("MATRIX:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("enter the source\n");
    scanf("%d",&source);
    int minimumCost = prims(a,n,source);
    printf("The minimum cost is:%d\n",minimumCost);
    return 0;
}





