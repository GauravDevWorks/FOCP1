/* Q 39 : Write a C program that computes and displays the squares of numbers from 1 to 10. */
#include <stdio.h>

int main() {
    int i;

    // Loop through numbers 1 to 10
    for(i = 1; i <= 10; i++) {
        // Compute and display the square of the number
        printf("Square of %d is %d\n", i, i * i);
    }

    return 0;
}
