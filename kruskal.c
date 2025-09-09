#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void kruskal(int c[MAX][MAX],int n){
    int i,j,u=0,v=0,a=0,b=0,e=0,cost=0,min;
    int p[MAX];
    for(int i=0;i<n;i++)
    p[i] = -1;
    while(e!=n-1){
        min=999;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(c[i][j] < min){
                    min = c[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        while(p[u]!= -1)
        u=p[u];
        while(p[v]!= -1)
        v=p[v];
        if(u!=v){
            printf("%d-->%d=%d\n",a,b,min);
            p[v]=u;
            e=e+1;
            cost=cost+min;
        }
        c[a][b]=c[b][a]=999;
    }
    printf("The minimum cost is:%d\n",cost);
}
int main(){
    int i,j,n;
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    int c[MAX][MAX];
    printf("Enter the Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&c[i][j]);
    }
    printf("MATRIX:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    kruskal(c,n);
    return 0;
}