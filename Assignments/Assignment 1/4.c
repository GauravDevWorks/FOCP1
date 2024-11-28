// Q4. WAP to accept two integer numbers and swap them using 4 different methods.

#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);

    temp = a; a = b; b = temp;
    printf("%d %d\n", a, b);

    a = a + b; b = a - b; a = a - b;
    printf("%d %d\n", a, b);

    a = a ^ b; b = a ^ b; a = a ^ b;
    printf("%d %d\n", a, b);

    int *p1 = &a, *p2 = &b;
    *p1 = *p1 + *p2; *p2 = *p1 - *p2; *p1 = *p1 - *p2;
    printf("%d %d\n", a, b);

    return 0;
}
