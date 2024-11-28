/*
Q 52: WAP to display the following output:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int rows = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
