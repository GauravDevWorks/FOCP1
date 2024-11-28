#include <stdio.h>

// 2. Program to accept three numbers and compute their average.
int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Average: %.2f\n", (a + b + c) / 3);
    return 0;
}