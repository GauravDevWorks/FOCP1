/*
Q 54: WAP to display the following output:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/

#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 5; j > i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
