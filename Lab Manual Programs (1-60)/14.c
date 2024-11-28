#include <stdio.h>

// 14. Program to accept two numbers and compute which of them is largest.
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Largest number: %d\n", a);
    } else {
        printf("Largest number: %d\n", b);
    }
    return 0;
}
