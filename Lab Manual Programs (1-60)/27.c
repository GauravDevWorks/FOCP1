/*
Question 27: WAP to check whether a triangle is equilateral, isosceles, or scalene.
*/

#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    
    if (angle1 == angle2 && angle2 == angle3)
        printf("The triangle is equilateral.\n");
    else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
        printf("The triangle is isosceles.\n");
    else
        printf("The triangle is scalene.\n");

    return 0;
}
