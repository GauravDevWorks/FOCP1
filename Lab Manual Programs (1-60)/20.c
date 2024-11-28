/*
Question 20: WAP to compute total expenses and a discount of 10% offered if the quantity is more than 1000.
*/

#include <stdio.h>

int main() {
    int quantity;
    float price_per_item, total_expenses, discount;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    printf("Enter the price per item: ");
    scanf("%f", &price_per_item);
    
    total_expenses = quantity * price_per_item;
    if (quantity > 1000)
        discount = 0.10 * total_expenses;
    else
        discount = 0.0;
    
    total_expenses -= discount;
    printf("Total expenses after discount: %.2f\n", total_expenses);

    return 0;
}
