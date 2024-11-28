/* Q41: Sum of the series S = 3 + 6 + 9 + ... + 30 */
#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 3; i <= 30; i += 3) {
        sum += i;
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
