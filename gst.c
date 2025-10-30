#include <stdio.h>
float calculate_final_price(float actual_price) {
    float gst = actual_price * 0.18;
    float final_price = actual_price + gst;
    return final_price;
}
int main() {
    float actual_price, final_price;
    printf("Enter the actual price: ");
    scanf("%f", &actual_price);
    final_price = calculate_final_price(actual_price);
    printf("The final price after adding 18%% GST is: %.2f\n", final_price);
    return 0;
}
