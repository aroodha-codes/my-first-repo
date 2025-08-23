#include<stdio.h>
#define MAX 100
void warshall(int a[MAX][MAX],int n){
    int transitive[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transitive[i][j]=a[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(transitive[i][k] && transitive[k][j]){
                    transitive[i][j]=1;
                }
            }
        }
    }
    printf("Transitive closure:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",transitive[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,a[MAX][MAX];
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    warshall(a,n);
    return 0;
}