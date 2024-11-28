/*
Q 60: WAP to display the following output:
54321
5432
543
54
5
*/

#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = rows; j >= rows - i + 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
