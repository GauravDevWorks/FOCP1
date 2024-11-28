/*
Question 23: WAP to check whether roots of quadratic equations are 
1. real and unequal
2. real and equal
3. imaginary
*/

#include <stdio.h>

int main() {
    float a, b, c, discriminant;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
        printf("The roots are real and unequal.\n");
    else if (discriminant == 0)
        printf("The roots are real and equal.\n");
    else
        printf("The roots are imaginary.\n");

    return 0;
}
