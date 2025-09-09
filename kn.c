#include <stdio.h> 
#include <stdlib.h> 
#define MAX_ITEMS 50 
// Structure to represent an item 
typedef struct { 
 int weight; 
 int profit; 
 float ratio; // Ratio of profit to weight 
} Item; 
// Function to swap two items 
void swap(Item* a, Item* b) { 
 Item temp = *a; 
 *a = *b; 
 *b = temp; 
} 
// Greedy approach for discrete Knapsack 
int discreteKnapsack(int n, int capacity, Item items[]) { 
 int totalProfit = 0; 
 for (int i = 0; i < n; i++) { 
 if (capacity <= 0) break; 
 if (items[i].weight <= capacity) { 
 totalProfit += items[i].profit; 
 capacity -= items[i].weight; 
 } 
 } 
 return totalProfit; 
} 
// Greedy approach for continuous Knapsack 
float continuousKnapsack(int n, int capacity, Item items[]) { 
 float totalProfit = 0.0; 
 for (int i = 0; i < n; i++) { 
 if (capacity <= 0) break; 
 if (items[i].weight <= capacity) { 
 totalProfit += items[i].profit; 
 capacity -= items[i].weight; 
 } else { 
 totalProfit += items[i].ratio * capacity; 
 capacity = 0; 
 } 
 } 
 return totalProfit; 
} 
int main() { 
 int n, capacity; 
 printf("Enter the number of items: "); 
 scanf("%d", &n); 
 printf("Enter the capacity of knapsack: "); 
 scanf("%d", &capacity); 
 Item items[MAX_ITEMS]; 
 printf("Enter the weight and profit of each item:\n"); 
 for (int i = 0; i < n; i++) { 
 scanf("%d %d", &items[i].weight, &items[i].profit); 
 items[i].ratio = (float)items[i].profit / items[i].weight; 
 } 
 // Sort items based on profit-to-weight ratio (descending order) 
 for (int i = 0; i < n - 1; i++) { 
 for (int j = 0; j < n - i - 1; j++) { 
 if (items[j].ratio < items[j + 1].ratio) { 
 swap(&items[j], &items[j + 1]); 
 } 
 } 
 } 
 // Discrete Knapsack 
 int discreteProfit = discreteKnapsack(n, capacity, items); 
 printf("Discrete Knapsack - Maximum Profit: %d\n", discreteProfit); 
 // Continuous Knapsack 
 float continuousProfit = continuousKnapsack(n, capacity, items); 
 printf("Continuous Knapsack - Maximum Profit: %.2f\n", continuousProfit); 
return 0; 
}