/* Q49: Write a program to compute the square of 1-10 numbers using a for loop */
#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("Square of %d = %d\n", i, i * i);
    }
    
    return 0;
}
