// Q9. WAP to print the pyramid pattern.

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d", (i + j) % 2);
        printf(" ");
        for (int j = 1; j <= i; j++) printf("%d", (i + j) % 2);
        printf("\n");
    }
    return 0;
}