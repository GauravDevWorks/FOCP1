/* Q42: Sum of the series S = 1 + 1/4 + 1/7 + 1/10 + ... + 1/25 */

#include <stdio.h>

int main() {
    double sum = 0.0;
    
    for(int i = 1; i <= 25; i += 3) {
        sum += 1.0 / i;
    }
    
    printf("Sum = %.2f\n", sum);
    return 0;
}