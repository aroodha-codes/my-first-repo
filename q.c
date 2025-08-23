#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Func􀆟on to swap two elements in an array
void swap(int* a, int* b) {
int temp = *a;
*a = *b;
*b = temp;
}
// Func􀆟on to par􀆟􀆟on the array
int partition(int arr[], int low, int high) {
int pivot = arr[low];
int i = low, j = high + 1, temp;
while (1) {
do {
i++;
} while (arr[i] < pivot && i <= high);
do {
j--;
} while (arr[j] > pivot);
if (i >= j)
break;
// Swap arr[i] and arr[j]
swap(&arr[i], &arr[j]);
}
// Swap arr[low] and arr[j]
swap(&arr[low], &arr[j]);
return j;
}
// Func􀆟on to perform Quick Sort
void quickSort(int arr[], int low, int high) {
if (low < high) {
int k = partition(arr, low, high);
quickSort(arr, low, k - 1);
quickSort(arr, k + 1, high);
}
}
int main() {
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
srand(time(NULL));
printf("Array Generated: ");
for (int i = 0; i < n; i++) {
arr[i] = rand() % 1000;
printf("%d ", arr[i]);
}
printf("\n");
clock_t start = clock();
quickSort(arr, 0, n - 1);
clock_t end = clock();
printf("Sorted Array: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
// Calculate 􀆟me taken in milliseconds
double total = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
printf("\nTotal 􀆟me taken: %.2f ms\n", total);
return 0;
}