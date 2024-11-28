#include <stdio.h>

// 12. Program to compute compound interest.
int main() {
    float principal, rate, time, amount, compoundInterest;
    int n;
    printf("\nEnter principal, rate, time, and number of times interest is compounded per year: ");
    scanf("%f %f %f %d", &principal, &rate, &time, &n);
    amount = principal;
    for (int i = 0; i < n * time; i++) {
        amount *= (1 + rate / (100 * n));
    }
    compoundInterest = amount - principal;
    printf("Compound Interest: %.2f\n", compoundInterest);
    return 0;
}
