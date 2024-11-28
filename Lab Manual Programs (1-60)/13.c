#include <stdio.h>

// 13. Program to accept two numbers x and y, and compute x raised to the power y.
int main() {
    double x, y, result = 1;
    printf("Enter base (x) and exponent (y): ");
    scanf("%lf %lf", &x, &y);
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    printf("Result: %.2f\n", result);
    return 0;
}
