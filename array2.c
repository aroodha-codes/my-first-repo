#include <stdio.h>
int main() {
    float prices[3], gst=18, finalPrices[3], total = 0.0;
    // Input prices of three products
    printf("Enter the prices of three products:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Price of product %d: ", i);
        scanf("%f", &prices[i]);
    }
    // Calculate final prices and total
    for (int i = 1; i <= 3; i++) {
        finalPrices[i] = prices[i] + (prices[i] * gst / 100);
    }
    // Print final prices and total
    printf("\nFinal prices after adding GST:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Product %d: %.2f\n", i, finalPrices[i]);
    }
    return 0;
}