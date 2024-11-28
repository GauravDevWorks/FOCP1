// Q8. WAP to find maximum & minimum score in the Marks array.

#include <stdio.h>

int main() {
    int marks[] = {45, 50, 55, 60, 65}, n = 5, max = marks[0], min = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) max = marks[i];
        if (marks[i] < min) min = marks[i];
    }
    printf("%d %d\n", max, min);
    return 0;
}
