
// Q4. WAP to find who & how many students have scored 99 in an array Marks.

#include <stdio.h>

int main() {
    int marks[] = {99, 45, 99, 60, 99}, n = 5, count = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d\n", count);
    return 0;
}
