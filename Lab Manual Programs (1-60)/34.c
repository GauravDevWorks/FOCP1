/* Q34: Circle Calculations */
#include <stdio.h>

int main() {
    double radius;
    int choice;
    const double PI = 3.14159;  // Declaring PI as a constant

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Choose an operation:\n1. Area\n2. Circumference\n3. Diameter\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Area: %.2lf\n", PI * radius * radius);
            break;
        case 2:
            printf("Circumference: %.2lf\n", 2 * PI * radius);
            break;
        case 3:
            printf("Diameter: %.2lf\n", 2 * radius);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
