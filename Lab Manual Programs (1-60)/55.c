/*
Q 55: WAP to display the following output:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
