/* Q50: Write a program to compute the sum of the following series: S = 4 + 8 + 12 + ... + 40 */
#include <stdio.h>

int main() {
    int sum = 0;

    for(int i = 4; i <= 40; i += 4) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
