/*
Question 24: WAP to check whether a number is even or odd. If a number is even, compute its square, else compute its cube.
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
        printf("Its square is %d.\n", number * number);
    } else {
        printf("The number %d is odd.\n", number);
        printf("Its cube is %d.\n", number * number * number);
    }

    return 0;
}
