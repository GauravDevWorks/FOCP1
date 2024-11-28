// Q6. WAP to find average score of the Marks array.

#include <stdio.h>

int main() {
    int marks[] = {45, 50, 55, 60, 65}, n = 5, sum = 0;
    for (int i = 0; i < n; i++) sum += marks[i];
    printf("%.2f\n", (float)sum / n);
    return 0;
}
