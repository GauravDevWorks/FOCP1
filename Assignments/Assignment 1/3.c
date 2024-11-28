// Q3. WAP to subtract two integers without using Minus (-) operator.

#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        unsigned borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", subtract(x, y));
    return 0;
}
