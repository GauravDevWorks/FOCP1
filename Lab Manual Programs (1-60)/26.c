/*
Question 26: WAP to compute whether a triangle is valid or not if angles are given.
*/

#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    
    if (angle1 + angle2 + angle3 == 180)
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");

    return 0;
}
