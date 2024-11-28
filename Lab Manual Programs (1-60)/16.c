/*
Question 16: WAP to accept a number and check its divisibility by 3 and 5.
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 3 == 0 && number % 5 == 0)
        printf("The number %d is divisible by 3 and 5.\n", number);
    else
        printf("The number %d is not divisible by 3 and 5.\n", number);

    return 0;
}
