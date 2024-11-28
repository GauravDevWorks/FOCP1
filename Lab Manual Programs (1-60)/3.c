#include <stdio.h>

// 3. Program to compute the area of a circle.
int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}
