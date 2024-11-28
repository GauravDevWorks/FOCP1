// Q5. WAP to find sum of all scores in Marks array.

#include <stdio.h>

int main() {
    int marks[] = {45, 50, 55, 60, 65}, n = 5, sum = 0;
    for (int i = 0; i < n; i++) sum += marks[i];
    printf("%d\n", sum);
    return 0;
}
