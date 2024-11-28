/* Q45: Write a program to compute the sum of the following series: S = 6 + 12 + 18 + ... + 60 */
#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 6; i <= 60; i += 6) {
        sum += i;
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
