#include <stdio.h>

// 7. Program to accept item no., quantity, and unit price, and compute the total cost with a discount of 20%.
int main() {
    int item_no, quantity;
    float unit_price, total_cost;
    printf("Enter item number, quantity, and unit price: ");
    scanf("%d %d %f", &item_no, &quantity, &unit_price);
    total_cost = quantity * unit_price * 0.80;
    printf("Total cost after 20%% discount: %.2f\n", total_cost);
    return 0;
}
