// Q3. WAP to find who scored first “99” in an array marks.

#include <stdio.h>

int main() {
    int marks[] = {55, 99, 88, 99, 77}, n = 5;
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
