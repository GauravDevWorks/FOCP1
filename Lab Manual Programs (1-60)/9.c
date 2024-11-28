#include <stdio.h>

// 9. Program to compute amount and discount (20%).
int main() {
    float amount, discount, final_amount;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    discount = amount * 0.20;
    final_amount = amount - discount;
    printf("Discount: %.2f\n", discount);
    printf("Final amount after discount: %.2f\n", final_amount);
    return 0;
}
