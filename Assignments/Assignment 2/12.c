// Q12. WAP to implement delete at Front, any position, & end in an array.

#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50}, n = 5, pos;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
