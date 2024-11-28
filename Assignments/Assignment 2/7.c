// Q7. WAP to check whether score is even or odd in an array.

#include <stdio.h>

int main() {
    int marks[] = {45, 50, 55, 60, 65}, n = 5;
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) printf("Even ");
        else printf("Odd ");
    }
    return 0;
}
