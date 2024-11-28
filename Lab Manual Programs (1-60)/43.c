/* Q43: Write a program to compute the sum of the following series: S = 1^2 + 2^2 + 3^2 + ... + 10^2 */
#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 10; i++) {
        sum += i * i;
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
