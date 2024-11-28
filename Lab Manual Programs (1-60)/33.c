/* Q33: Basic Arithmetic Operations */
#include <stdio.h>

int main() {
    double num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Result: %.2lf\n", num1 + num2); break;
        case 2: printf("Result: %.2lf\n", num1 - num2); break;
        case 3: printf("Result: %.2lf\n", num1 * num2); break;
        case 4: 
            if(num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
