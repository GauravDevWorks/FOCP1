//Q1. WAP to check whether a given is Armstrong or not.

#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += power(remainder, n);
        originalNum /= 10;
    }

    if (result == num) printf("Armstrong\n");
    else printf("Not Armstrong\n");

    return 0;
}
