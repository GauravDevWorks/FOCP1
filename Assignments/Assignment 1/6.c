// Q6. WAP to accept a coordinate point and determine in which quadrant it lies.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) printf("First\n");
    else if (x < 0 && y > 0) printf("Second\n");
    else if (x < 0 && y < 0) printf("Third\n");
    else if (x > 0 && y < 0) printf("Fourth\n");
    else printf("Axis\n");

    return 0;
}
