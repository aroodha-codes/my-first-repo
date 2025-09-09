#include<stdio.h>
#define MAX 100
#define INF 999
int min(int a,int b){
    return (a<b)?a:b;
}
void floydd(int a[MAX][MAX],int n){
    int d[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            d[i][j]=a[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
if(d[i][k]!=INF && d[k][j]!=INF && d[i][j] > d[i][k]+d[k][j] ){
d[i][j]=d[i][k]+d[k][j];
}
            }
        }
    }
    printf("d[i][j]:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter vertices:");
    scanf("%d",&n);
    int a[MAX][MAX];
    printf("Adjacency Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0 && i!=j){
                a[i][j]=INF;
            }
        }
    }
    printf("MAtrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    floydd(a,n);
    return 0;
}