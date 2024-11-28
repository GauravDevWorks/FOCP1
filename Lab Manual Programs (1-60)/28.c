/*
Question 28: WAP to compute roots of a Quadratic Equation.
*/

#include <stdio.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + discriminant / 2) / a;
        root2 = (-b - discriminant / 2) / a;
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root is: %.2f\n", root1);
    } else {
        printf("The roots are imaginary.\n");
    }

    return 0;
}
