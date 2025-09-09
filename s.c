#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
for (int i = 0; i < n - 1; i++) {
int minIndex = i;
for (int j = i + 1; j < n; j++) {
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
// Swap arr[i] and arr[minIndex]
int temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
}
}
int main() {
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[100000];
// Generating random numbers as elements
srand(time(NULL));
for (int i = 0; i < n; i++) {
arr[i] = rand() % 1000;
printf("%d ", arr[i]);
}
printf("\n");
// Perform Selection Sort
clock_t start = clock();
selectionSort(arr, n);
clock_t end = clock();
// Calculate time taken in milliseconds
double total = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
// Print sorted array
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\nTotal time taken: %.2f ms\n", total);
return 0;
}