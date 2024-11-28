/* Q37: Triangle Type Check */
#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Taking input from the user
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the given sides can form a valid triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        // Classify the triangle
        if (side1 == side2 && side2 == side3) {
            printf("The t  riangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is asymmetrical.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
