#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100
void warshalls(int a[MAX_VERTICES][MAX_VERTICES],int n){
    int transitive[MAX_VERTICES][MAX_VERTICES];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transitive[i][j]=a[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(transitive[i][k] && transitive[k][j])
                    transitive[i][j]=1;
            }
        }
    }
    printf("transitive closure:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",transitive[i][j]);
        }
        printf("\n");
    }
}
    int main(){
        int n,a[MAX_VERTICES][MAX_VERTICES];
        printf("Enter vertices:\n");
        scanf("%d",&n);
        printf("Adjacency matrix:\n");
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
        warshalls(a,n);
        return 0;
    }