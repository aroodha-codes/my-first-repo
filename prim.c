#include<stdio.h>
#define MAX_VERTICES 100
#define INF 999
int primsApproach(int a[MAX_VERTICES][MAX_VERTICES],int n,int source){
    int s[MAX_VERTICES]={0};
    int d[MAX_VERTICES];
    int u,v,min,sum=0;
    for(int i=0;i<n;i++){
        d[i]=a[source][i];
    }
    s[source]=1;
    for(int i=0;i<n-1;i++){
        min=INF;
        for(int j=0;j<n;j++){
            if(s[j]==0 && d[j]<min){
                min=d[j];
                u=j;
            }
        }
        s[u]=1;
        sum+=d[u];
        for (v=0;v<n;v++){
            if(s[v]==0 && d[v]>a[u][v]){
                d[v]=a[u][v];
            }
        }
    }
    return sum;
}