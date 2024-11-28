// Q11. WAP to implement Insert at Front, any position, & end in an array.

#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40}, n = 4, pos, value;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    scanf("%d %d", &pos, &value);
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
