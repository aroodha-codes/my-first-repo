#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
#define INF 999
void dijkstra(int a[MAX_VERTICES][MAX_VERTICES],int n,int source){
    int d[MAX_VERTICES];
    bool s[MAX_VERTICES];
    for(int i=0;i<n;i++){
        d[i]=a[source][i];
        s[i]=false;
    }
    s[source]=true;
    for(int i=0;i<n-1;i++){
        int u,min=INF;
        for(int v=0;v<n;v++){
            if(!s[v] && d[v] < min){
                min = d[v];
                u = v;
            }
        }
        s[u] = true;
        for(int v=0;v<n;v++){
            if(!s[v] && a[u][v] && d[u]!=INF && d[v] > a[u][v]+d[u]){
                d[v] = a[u][v] + d[u];
            }
        }
    }
    printf("\nShortest path:\n");
    for(int i=0;i<n;i++){
        printf("%d-->%d=%d\n",source,i,d[i]);
    }
}
int main(){
    int n,source,a[MAX_VERTICES][MAX_VERTICES];
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("MATRIX:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the source:\n");
    scanf("%d",&source);
    dijkstra(a,n,source);
    return 0;
}