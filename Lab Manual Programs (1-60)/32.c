/* Q32: Manual Square Root Calculation & Other Operations */
#include <stdio.h>

double square_root(double num) {
    double guess = num / 2.0;
    double epsilon = 0.00001;
    while ((guess * guess - num) > epsilon || (num - guess * guess) > epsilon) {
        guess = (guess + num / guess) / 2.0;
    }
    return guess;
}

int main() {
    int choice;
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    printf("Choose an operation:\n1. Square\n2. Square Root\n3. Cube\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Square: %.2lf\n", number * number); break;
        case 2: printf("Square Root: %.2lf\n", square_root(number)); break;
        case 3: printf("Cube: %.2lf\n", number * number * number); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
