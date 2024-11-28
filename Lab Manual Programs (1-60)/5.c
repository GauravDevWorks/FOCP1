#include <stdio.h>

// 5. Program to compute the area of a right-angle triangle.
int main() {
    float base, height, area;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = (base * height) / 2;
    printf("Area: %.2f\n", area);
    return 0;
}
