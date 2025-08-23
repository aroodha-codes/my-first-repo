#include <stdio.h>
#define MAX_VERTICES 100
void kruskalApproach(int c[MAX_VERTICES][MAX_VERTICES], int n) {
 int i, j, e = 0, cost = 0, u = 0, v = 0, a = 0, b = 0, min;
 int p[MAX_VERTICES];
 for (i = 0; i < n; i++)
 p[i] = -1;
while (e != n - 1) { 
 min = 999; 
 //SelecƟng edge from a given input graph in ascending order.
 for (i = 0; i < n; i++) { 
 for (j = 0; j < n; j++) { 
 if (c[i][j] < min) { 
 min = c[i][j]; 
 a = u = i; 
 b = v = j; 
 } 
 } 
 } 
 
 //Checking whether the selected edge creates cycle or not. 
 while (p[u] != -1) 
 u = p[u]; 
 while (p[v] != -1) 
 v = p[v]; 
 
 if (u != v) { 
 printf("%d --> %d = %d\n", a, b, min); 
 p[v] = u; 
 e = e + 1; 
 cost = cost + min; 
 } 
 c[a][b] = c[b][a] = 999; 
 } 
 printf("\nMinimum cost of a spanning tree is %d units\n", cost); 
} 
int main() { 
 int i, j, n; 
 printf("Enter the number of verƟces: ");
 scanf("%d", &n); 
 int c[MAX_VERTICES][MAX_VERTICES]; 
 
 printf("Enter the weighted graph in form of adjacency matrix:\n"); 
 for (i = 0; i < n; i++) { 
 for (j = 0; j < n; j++) 
 scanf("%d", &c[i][j]); 
 } 
 
 printf("\nMatrix:\n"); 
 for (i = 0; i < n; i++) {
for (j = 0; j < n; j++)
 printf("%d\t", c[i][j]);
 printf("\n");
 }
 
 kruskalApproach(c, n);
 return 0;
}