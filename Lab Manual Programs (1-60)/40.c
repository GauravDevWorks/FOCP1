/* Q41: Write a program to compute the sum of the following series: S = 3 + 6 + 9 + ... + 30 */
#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 10; i++) {
        sum += i;
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
