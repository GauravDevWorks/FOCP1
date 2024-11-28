/* Q44: Write a program to compute the multiplication of the following series: M = 10 * 8 * 6 * 4 * 2 */
#include <stdio.h>

int main() {
    int product = 1;
    
    for(int i = 10; i >= 2; i -= 2) {
        product *= i;
    }
    
    printf("Product = %d\n", product);
    return 0;
}
